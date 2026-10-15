#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
#include "unitysdk/OIPMNNAHIFP.h"
class EIOCFENBIHO;
namespace RPG::Client { class AvatarEnhancedHint; }
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BPNOCPMIFPE_AALMHLFFNLH_OFFSET UNITYSDK_OFFSET(0xC1AC190)
#define BPNOCPMIFPE_ACBHHJNCOIJ_OFFSET UNITYSDK_OFFSET(0xC1ABDF0)
#define BPNOCPMIFPE_ALDHKNJCOKK_OFFSET UNITYSDK_OFFSET(0xC1AC340)
#define BPNOCPMIFPE_CJIELLPEPPA_OFFSET UNITYSDK_OFFSET(0xC1ABD40)
#define BPNOCPMIFPE_CTOR_OFFSET UNITYSDK_OFFSET(0xC1ABD30)
#define BPNOCPMIFPE_EOJPCOKPHHF_OFFSET UNITYSDK_OFFSET(0xC1AC130)
#define BPNOCPMIFPE_FLFNHMLLBGL_OFFSET UNITYSDK_OFFSET(0xC1AC030)
#define BPNOCPMIFPE_IFOPNDPEEMH_OFFSET UNITYSDK_OFFSET(0xC1AC080)
#define BPNOCPMIFPE_LEHEGDGDJDO_OFFSET UNITYSDK_OFFSET(0xC1AC0D0)
#define BPNOCPMIFPE_MCFFEJIHBHE_OFFSET UNITYSDK_OFFSET(0xC1ABE50)
#define BPNOCPMIFPE_MGNCOCKAKGG_OFFSET UNITYSDK_OFFSET(0xC1ACA00)
#define BPNOCPMIFPE_ONEJGPCEONL_OFFSET UNITYSDK_OFFSET(0xC1ACA70)
#define BPNOCPMIFPE_PEONEPGMNEE_OFFSET UNITYSDK_OFFSET(0xC1ACEA0)
#define BPNOCPMIFPE_PNPIEMAIEKJ_OFFSET UNITYSDK_OFFSET(0xC1AC980)

inline static constexpr unsigned int BPNOCPMIFPE_TypeDefinitionIndex = 62756;

	class BPNOCPMIFPE : public ::BHPMNMMGLHI
	{
	public:
		::EIOCFENBIHO* PCJODKAPDBK; // 0x20
		::System::Void _ctor(::EIOCFENBIHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIOCFENBIHO*))((::PBYTE)hIl2Cpp + BPNOCPMIFPE_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 CJIELLPEPPA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNOCPMIFPE_CJIELLPEPPA_OFFSET))(this);
		}

		::System::Void ACBHHJNCOIJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPNOCPMIFPE_ACBHHJNCOIJ_OFFSET))(this, a1);
		}

		::System::UInt32 MCFFEJIHBHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNOCPMIFPE_MCFFEJIHBHE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* FLFNHMLLBGL()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNOCPMIFPE_FLFNHMLLBGL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* IFOPNDPEEMH()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNOCPMIFPE_IFOPNDPEEMH_OFFSET))(this);
		}

		::System::Boolean LEHEGDGDJDO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNOCPMIFPE_LEHEGDGDJDO_OFFSET))(this);
		}

		::System::Void EOJPCOKPHHF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BPNOCPMIFPE_EOJPCOKPHHF_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* AALMHLFFNLH(::OIPMNNAHIFP a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::OIPMNNAHIFP, ::System::UInt32))((::PBYTE)hIl2Cpp + BPNOCPMIFPE_AALMHLFFNLH_OFFSET))(this, a1, a2);
		}

		::System::Void ALDHKNJCOKK(::System::Collections::Generic::IEnumerable_1<::RPG::Client::AvatarEnhancedHint*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::AvatarEnhancedHint*>*))((::PBYTE)hIl2Cpp + BPNOCPMIFPE_ALDHKNJCOKK_OFFSET))(this, a1);
		}

		::System::Boolean PNPIEMAIEKJ(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPNOCPMIFPE_PNPIEMAIEKJ_OFFSET))(this, a1);
		}

		::System::Void MGNCOCKAKGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNOCPMIFPE_MGNCOCKAKGG_OFFSET))(this);
		}

		::System::Void ONEJGPCEONL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNOCPMIFPE_ONEJGPCEONL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PEONEPGMNEE(::OIPMNNAHIFP a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::OIPMNNAHIFP, ::System::UInt32))((::PBYTE)hIl2Cpp + BPNOCPMIFPE_PEONEPGMNEE_OFFSET))(this, a1, a2);
		}

	};
