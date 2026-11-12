#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/System/Object.h"
class NPPNOGNDFMJ_DJHAIKLBAAN;

#define NPPNOGNDFMJ_DJHAIKLBAAN_CCTOR_OFFSET UNITYSDK_OFFSET(0xC612DC0)
#define NPPNOGNDFMJ_DJHAIKLBAAN_CTOR_OFFSET UNITYSDK_OFFSET(0xC612D00)
#define NPPNOGNDFMJ_DJHAIKLBAAN_EQUALS_OFFSET UNITYSDK_OFFSET(0xC612D10)
#define NPPNOGNDFMJ_DJHAIKLBAAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xC612D70)

inline static constexpr unsigned int NPPNOGNDFMJ_DJHAIKLBAAN_TypeDefinitionIndex = 61869;

	class NPPNOGNDFMJ_DJHAIKLBAAN : public ::System::Object
	{
	public:
		static ::NPPNOGNDFMJ_DJHAIKLBAAN** StaticGet_FMJPMFEDIJL()
		{
			return (::NPPNOGNDFMJ_DJHAIKLBAAN**)UnitySDK::FromName("", "DJHAIKLBAAN")->GetStaticField(0x5BD50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_DJHAIKLBAAN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_DJHAIKLBAAN_CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::RPG::Client::LockSource a1, ::RPG::Client::LockSource a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LockSource, ::RPG::Client::LockSource))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_DJHAIKLBAAN_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::RPG::Client::LockSource a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LockSource))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_DJHAIKLBAAN_GETHASHCODE_OFFSET))(this, a1);
		}

	};
