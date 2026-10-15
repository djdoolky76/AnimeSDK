#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKHFAEBGEIB;
namespace RPG::Client::Promises { class Promise; }

#define IKHFAEBGEIB_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x1648D250)
#define IKHFAEBGEIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1648D2C0)
#define IKHFAEBGEIB_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x1648D2D0)

inline static constexpr unsigned int IKHFAEBGEIB_TypeDefinitionIndex = 73116;

	class IKHFAEBGEIB : public ::System::Object
	{
	public:
		static ::IKHFAEBGEIB** StaticGet_FLMODBLFAGD()
		{
			return (::IKHFAEBGEIB**)UnitySDK::FromName("", "IKHFAEBGEIB")->GetStaticField(0x64420);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHFAEBGEIB_CTOR_OFFSET))(this);
		}

		static ::IKHFAEBGEIB* ACMKLFOMPFC()
		{
			return ((::IKHFAEBGEIB*(*)())((::PBYTE)hIl2Cpp + IKHFAEBGEIB_ACMKLFOMPFC_OFFSET))();
		}

		::RPG::Client::Promises::Promise* HKKFFCBJOKM()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKHFAEBGEIB_HKKFFCBJOKM_OFFSET))(this);
		}

	};
