#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPADOJLOLPH.h"
#include "unitysdk/RPG/Client/CompilerFramework/LocationKind.h"
class IPADOJLOLPH;
namespace System { class Object; }

#define FPPINDPHMKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C532760)
#define FPPINDPHMKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5326A0)
#define FPPINDPHMKL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C5326C0)
#define FPPINDPHMKL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C532710)
#define FPPINDPHMKL_LICEAJDINOM_OFFSET UNITYSDK_OFFSET(0x1C5326B0)

	class FPPINDPHMKL : public ::IPADOJLOLPH
	{
	public:
		static ::IPADOJLOLPH** StaticGet_BLLNPCIPLGH()
		{
			return (::IPADOJLOLPH**)UnitySDK::FromName("", "FPPINDPHMKL")->GetStaticField(0xE50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPINDPHMKL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPPINDPHMKL_CCTOR_OFFSET))();
		}

		::RPG::Client::CompilerFramework::LocationKind LICEAJDINOM()
		{
			return ((::RPG::Client::CompilerFramework::LocationKind(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPINDPHMKL_LICEAJDINOM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FPPINDPHMKL_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPINDPHMKL_GETHASHCODE_OFFSET))(this);
		}

	};
