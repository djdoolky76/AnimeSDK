#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAALIJLGHNM;
namespace System { class Object; }

#define HAALIJLGHNM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E501A00)
#define HAALIJLGHNM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E501A40)
#define HAALIJLGHNM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E501A50)

inline static constexpr unsigned int HAALIJLGHNM___c_TypeDefinitionIndex = 27938;

	class HAALIJLGHNM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C5B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAALIJLGHNM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAALIJLGHNM___C_CTOR_OFFSET))(this);
		}

		::HAALIJLGHNM* __cctor_b__28_0()
		{
			return ((::HAALIJLGHNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAALIJLGHNM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
