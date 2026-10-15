#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGCPAMNLCGN;
class AMDJAFAHKEL;
class BICCMEPJMDO;
class FDLCNGPGEFP;
class JBACCAGFHON;
class MEAAEGAIPCB;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MEAAEGAIPCB_BPEHGFIILGO_OFFSET UNITYSDK_OFFSET(0xB8AF6D0)
#define MEAAEGAIPCB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB8AECE0)
#define MEAAEGAIPCB_CLMAMIDMJFN_OFFSET UNITYSDK_OFFSET(0xB8B0DD0)
#define MEAAEGAIPCB_CTOR_OFFSET UNITYSDK_OFFSET(0xB8AED50)
#define MEAAEGAIPCB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB8AF040)
#define MEAAEGAIPCB_FACNDHHCBDK_OFFSET UNITYSDK_OFFSET(0xB8B1470)
#define MEAAEGAIPCB_IJNCOMMMEKM_OFFSET UNITYSDK_OFFSET(0xB8B0EA0)
#define MEAAEGAIPCB_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB8AED60)
#define MEAAEGAIPCB_LFOKHIBFLIM_OFFSET UNITYSDK_OFFSET(0xB8AF0F0)
#define MEAAEGAIPCB_LKFEAFHIGLE_OFFSET UNITYSDK_OFFSET(0xB8AF910)
#define MEAAEGAIPCB_MGPLCIDEKIB_OFFSET UNITYSDK_OFFSET(0xB8B0CB0)
#define MEAAEGAIPCB_OGBFHOKHBML_OFFSET UNITYSDK_OFFSET(0xB8B0B90)
#define MEAAEGAIPCB_PHKIGBHONMJ_OFFSET UNITYSDK_OFFSET(0xB8B0400)
#define MEAAEGAIPCB_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB8AF080)

inline static constexpr unsigned int MEAAEGAIPCB_TypeDefinitionIndex = 78130;

	class MEAAEGAIPCB : public ::System::Object
	{
	public:
		::JBACCAGFHON* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + MEAAEGAIPCB_CTOR_OFFSET))(this, a1);
		}

		static ::MEAAEGAIPCB* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::MEAAEGAIPCB*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + MEAAEGAIPCB_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEAAEGAIPCB_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEAAEGAIPCB_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEAAEGAIPCB_TEARDOWN_OFFSET))(this);
		}

		::System::Void LFOKHIBFLIM(::FDLCNGPGEFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLCNGPGEFP*))((::PBYTE)hIl2Cpp + MEAAEGAIPCB_LFOKHIBFLIM_OFFSET))(this, a1);
		}

		::System::Void BPEHGFIILGO(::FDLCNGPGEFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLCNGPGEFP*))((::PBYTE)hIl2Cpp + MEAAEGAIPCB_BPEHGFIILGO_OFFSET))(this, a1);
		}

		::System::Void LKFEAFHIGLE(::System::Collections::Generic::IEnumerable_1<::AMDJAFAHKEL*>* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::AMDJAFAHKEL*>*, ::System::UInt64))((::PBYTE)hIl2Cpp + MEAAEGAIPCB_LKFEAFHIGLE_OFFSET))(this, a1, a2);
		}

		::System::Void PHKIGBHONMJ(::System::Collections::Generic::IEnumerable_1<::BICCMEPJMDO*>* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::BICCMEPJMDO*>*, ::System::UInt64))((::PBYTE)hIl2Cpp + MEAAEGAIPCB_PHKIGBHONMJ_OFFSET))(this, a1, a2);
		}

		::System::Void OGBFHOKHBML(::FDLCNGPGEFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLCNGPGEFP*))((::PBYTE)hIl2Cpp + MEAAEGAIPCB_OGBFHOKHBML_OFFSET))(this, a1);
		}

		::System::Void MGPLCIDEKIB(::FDLCNGPGEFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLCNGPGEFP*))((::PBYTE)hIl2Cpp + MEAAEGAIPCB_MGPLCIDEKIB_OFFSET))(this, a1);
		}

		::System::Void CLMAMIDMJFN(::FDLCNGPGEFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLCNGPGEFP*))((::PBYTE)hIl2Cpp + MEAAEGAIPCB_CLMAMIDMJFN_OFFSET))(this, a1);
		}

		::System::Void IJNCOMMMEKM(::FDLCNGPGEFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLCNGPGEFP*))((::PBYTE)hIl2Cpp + MEAAEGAIPCB_IJNCOMMMEKM_OFFSET))(this, a1);
		}

		::System::Void FACNDHHCBDK(::AGCPAMNLCGN* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*, ::System::UInt32))((::PBYTE)hIl2Cpp + MEAAEGAIPCB_FACNDHHCBDK_OFFSET))(this, a1, a2);
		}

	};
