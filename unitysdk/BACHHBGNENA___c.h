#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BACHHBGNENA;
namespace System { class Object; }

#define BACHHBGNENA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA6A940)
#define BACHHBGNENA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA6A980)
#define BACHHBGNENA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FA6A990)

inline static constexpr unsigned int BACHHBGNENA___c_TypeDefinitionIndex = 32785;

	class BACHHBGNENA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BACHHBGNENA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACHHBGNENA___C_CTOR_OFFSET))(this);
		}

		::BACHHBGNENA* __cctor_b__33_0()
		{
			return ((::BACHHBGNENA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACHHBGNENA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
