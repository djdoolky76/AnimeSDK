#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class ICollector_1; }
namespace System { class String; }

#define EJNMEBKMOFC_BFPGGONNCAP_OFFSET UNITYSDK_OFFSET(0x154E4950)
#define EJNMEBKMOFC_CTOR_OFFSET UNITYSDK_OFFSET(0x154E3B60)
#define EJNMEBKMOFC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x154E53E0)
#define EJNMEBKMOFC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x154E3C30)
#define EJNMEBKMOFC_NBADIKPNPPA_OFFSET UNITYSDK_OFFSET(0x154E3EE0)
#define EJNMEBKMOFC_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x154E50B0)

inline static constexpr unsigned int EJNMEBKMOFC_TypeDefinitionIndex = 77169;

	class EJNMEBKMOFC : public ::System::Object
	{
	public:
		::NDDFLGNNMDK* FKINCGODJEP; // 0x10
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x18
		::Entitas::ICollector_1<::HIOEAKHGILF*>* NPNPNIAIMLO; // 0x20
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + EJNMEBKMOFC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNMEBKMOFC_INITIALIZE_OFFSET))(this);
		}

		::System::Void NBADIKPNPPA(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + EJNMEBKMOFC_NBADIKPNPPA_OFFSET))(this, a1);
		}

		::System::Void BFPGGONNCAP(::HIOEAKHGILF* a1, ::System::Single a2, ::System::Single a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Single, ::System::Single, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EJNMEBKMOFC_BFPGGONNCAP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNMEBKMOFC_TEARDOWN_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNMEBKMOFC_EXECUTE_OFFSET))(this);
		}

	};
