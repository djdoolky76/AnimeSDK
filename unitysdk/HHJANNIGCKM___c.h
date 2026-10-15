#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHJANNIGCKM;
namespace System { class Object; }

#define HHJANNIGCKM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E55AFE0)
#define HHJANNIGCKM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E55B020)
#define HHJANNIGCKM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E55B030)

inline static constexpr unsigned int HHJANNIGCKM___c_TypeDefinitionIndex = 28868;

	class HHJANNIGCKM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31F80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHJANNIGCKM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJANNIGCKM___C_CTOR_OFFSET))(this);
		}

		::HHJANNIGCKM* __cctor_b__28_0()
		{
			return ((::HHJANNIGCKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJANNIGCKM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
