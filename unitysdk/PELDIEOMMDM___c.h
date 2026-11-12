#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PELDIEOMMDM;
namespace System { class Object; }

#define PELDIEOMMDM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1E8A00)
#define PELDIEOMMDM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1E8A40)
#define PELDIEOMMDM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F1E8A50)

inline static constexpr unsigned int PELDIEOMMDM___c_TypeDefinitionIndex = 25720;

	class PELDIEOMMDM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x309D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PELDIEOMMDM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PELDIEOMMDM___C_CTOR_OFFSET))(this);
		}

		::PELDIEOMMDM* __cctor_b__28_0()
		{
			return ((::PELDIEOMMDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PELDIEOMMDM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
