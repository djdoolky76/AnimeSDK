#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BABNOKHOBCF;
class INMMPMDELKE;
class MNCOPNHONHO;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GDJGNCBPLFI_CFDCFBDGKEB_OFFSET UNITYSDK_OFFSET(0x15993B90)
#define GDJGNCBPLFI_CTOR_OFFSET UNITYSDK_OFFSET(0x159936A0)
#define GDJGNCBPLFI_DIJBCMFPNMB_OFFSET UNITYSDK_OFFSET(0x159939B0)
#define GDJGNCBPLFI_EXECUTE_OFFSET UNITYSDK_OFFSET(0x159945C0)
#define GDJGNCBPLFI_FNHOOMOJJJO_OFFSET UNITYSDK_OFFSET(0x15994B00)
#define GDJGNCBPLFI_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15993E30)
#define GDJGNCBPLFI_JCONBLBJFJJ_1_OFFSET UNITYSDK_OFFSET(0x15995090)
#define GDJGNCBPLFI_JCONBLBJFJJ_OFFSET UNITYSDK_OFFSET(0x15994A80)
#define GDJGNCBPLFI_LAGAFLIFFMN_OFFSET UNITYSDK_OFFSET(0x15994FF0)
#define GDJGNCBPLFI_NFICBOBFJKE_OFFSET UNITYSDK_OFFSET(0x159947E0)
#define GDJGNCBPLFI_NNPFOLOMCMF_OFFSET UNITYSDK_OFFSET(0x15995460)
#define GDJGNCBPLFI_PPBBNMIPFMB_OFFSET UNITYSDK_OFFSET(0x15994080)
#define GDJGNCBPLFI_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x15994380)

inline static constexpr unsigned int GDJGNCBPLFI_TypeDefinitionIndex = 76752;

	class GDJGNCBPLFI : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::INMMPMDELKE*>* BBANBAKCLCK; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* BMEOJFMJJFI; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* GFIPFGJPHHI; // 0x20
		::BABNOKHOBCF* FKINCGODJEP; // 0x28
		::MNCOPNHONHO* PDENFEFCAGN; // 0x30
		::Entitas::ICollector_1<::INMMPMDELKE*>* KLPOJBKOOOK; // 0x38
		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + GDJGNCBPLFI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void DIJBCMFPNMB(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + GDJGNCBPLFI_DIJBCMFPNMB_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJGNCBPLFI_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJGNCBPLFI_TEARDOWN_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJGNCBPLFI_EXECUTE_OFFSET))(this);
		}

		::System::Void PPBBNMIPFMB(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + GDJGNCBPLFI_PPBBNMIPFMB_OFFSET))(this, a1);
		}

		::System::Boolean LAGAFLIFFMN(::INMMPMDELKE* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*, ::System::String*))((::PBYTE)hIl2Cpp + GDJGNCBPLFI_LAGAFLIFFMN_OFFSET))(this, a1, a2);
		}

		::System::Void JCONBLBJFJJ(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + GDJGNCBPLFI_JCONBLBJFJJ_OFFSET))(this, a1);
		}

		::System::Void JCONBLBJFJJ_1(::INMMPMDELKE* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::System::String*))((::PBYTE)hIl2Cpp + GDJGNCBPLFI_JCONBLBJFJJ_1_OFFSET))(this, a1, a2);
		}

		::System::Void CFDCFBDGKEB(::INMMPMDELKE* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::System::String*))((::PBYTE)hIl2Cpp + GDJGNCBPLFI_CFDCFBDGKEB_OFFSET))(this, a1, a2);
		}

		::System::Void FNHOOMOJJJO(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + GDJGNCBPLFI_FNHOOMOJJJO_OFFSET))(this, a1, a2);
		}

		::System::Void NFICBOBFJKE(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + GDJGNCBPLFI_NFICBOBFJKE_OFFSET))(this, a1, a2);
		}

		::System::Int32 NNPFOLOMCMF(::INMMPMDELKE* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::INMMPMDELKE*, ::System::String*))((::PBYTE)hIl2Cpp + GDJGNCBPLFI_NNPFOLOMCMF_OFFSET))(this, a1, a2);
		}

	};
