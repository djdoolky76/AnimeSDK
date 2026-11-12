#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKEIGJNHMDN;
class OIKDLNCBPFM;
namespace System { class Object; }

#define BGGDOPNKDLK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D73EB90)
#define BGGDOPNKDLK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73EBD0)
#define BGGDOPNKDLK___C___CCTOR_B__27_0_OFFSET UNITYSDK_OFFSET(0x1D73EBE0)

inline static constexpr unsigned int BGGDOPNKDLK___c_TypeDefinitionIndex = 38194;

	class BGGDOPNKDLK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x679B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGGDOPNKDLK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGDOPNKDLK___C_CTOR_OFFSET))(this);
		}

		::System::Single __cctor_b__27_0(::CKEIGJNHMDN* a1, ::OIKDLNCBPFM* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Single(*)(::PVOID, ::CKEIGJNHMDN*, ::OIKDLNCBPFM*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BGGDOPNKDLK___C___CCTOR_B__27_0_OFFSET))(this, a1, a2, a3, a4);
		}

	};
