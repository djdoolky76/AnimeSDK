#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHMJNBPDMKL.h"
#include "unitysdk/System/Object.h"
class BAHEINMHOAC;
class JIJBCGDANLJ;
class KPDKCEAFBHI;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IKFPIFCMPJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1647B590)
#define IKFPIFCMPJM_ELLPBNAFLML_OFFSET UNITYSDK_OFFSET(0x1647C130)
#define IKFPIFCMPJM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1647B980)
#define IKFPIFCMPJM_IMAAANBLOKL_OFFSET UNITYSDK_OFFSET(0x1647B730)
#define IKFPIFCMPJM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1647B640)
#define IKFPIFCMPJM_IPFGGPLFDKM_OFFSET UNITYSDK_OFFSET(0x1647C3C0)
#define IKFPIFCMPJM_IPPDFDJMEOD_OFFSET UNITYSDK_OFFSET(0x1647C060)
#define IKFPIFCMPJM_MPJOHNOMFHP_OFFSET UNITYSDK_OFFSET(0x1647C290)
#define IKFPIFCMPJM_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1647B900)

inline static constexpr unsigned int IKFPIFCMPJM_TypeDefinitionIndex = 75944;

	class IKFPIFCMPJM : public ::System::Object
	{
	public:
		::JIJBCGDANLJ* EEFMDEHLLFI; // 0x10
		::System::Collections::Generic::List_1<::GHMJNBPDMKL>* LDCKLLMLKHO; // 0x18
		::KPDKCEAFBHI* PDENFEFCAGN; // 0x20
		// static const ::System::Object PNMADEKHJMF; // 0x0
		// static const ::System::String* DEAOAEDAFPJ; // 0x0
		::System::Void _ctor(::JIJBCGDANLJ* a1, ::KPDKCEAFBHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JIJBCGDANLJ*, ::KPDKCEAFBHI*))((::PBYTE)hIl2Cpp + IKFPIFCMPJM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFPIFCMPJM_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFPIFCMPJM_TEARDOWN_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFPIFCMPJM_EXECUTE_OFFSET))(this);
		}

		::System::Void ELLPBNAFLML(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKFPIFCMPJM_ELLPBNAFLML_OFFSET))(this, a1);
		}

		::System::Void IMAAANBLOKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFPIFCMPJM_IMAAANBLOKL_OFFSET))(this);
		}

		static ::System::Void IPFGGPLFDKM(::BAHEINMHOAC* a1)
		{
			return ((::System::Void(*)(::BAHEINMHOAC*))((::PBYTE)hIl2Cpp + IKFPIFCMPJM_IPFGGPLFDKM_OFFSET))(a1);
		}

		::System::Boolean IPPDFDJMEOD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFPIFCMPJM_IPPDFDJMEOD_OFFSET))(this);
		}

		::System::Single MPJOHNOMFHP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFPIFCMPJM_MPJOHNOMFHP_OFFSET))(this);
		}

	};
