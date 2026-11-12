#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLJANPDNDBJ;
namespace RPG::Client { class BaseGameFlowContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HBAEJEHIOIO_AEKOJHIIEKM_OFFSET UNITYSDK_OFFSET(0x16B24B00)
#define HBAEJEHIOIO_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0x16B245D0)
#define HBAEJEHIOIO_CTOR_OFFSET UNITYSDK_OFFSET(0x16B24F50)
#define HBAEJEHIOIO_DOGIEJMCING_OFFSET UNITYSDK_OFFSET(0x16B24590)
#define HBAEJEHIOIO_GNCJAGHKEPO_OFFSET UNITYSDK_OFFSET(0x16B246B0)
#define HBAEJEHIOIO_GNNPFBBMFLA_OFFSET UNITYSDK_OFFSET(0x16B24530)
#define HBAEJEHIOIO_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x16B24EB0)
#define HBAEJEHIOIO_PKOLGKOMDPK_OFFSET UNITYSDK_OFFSET(0x16B24740)

inline static constexpr unsigned int HBAEJEHIOIO_TypeDefinitionIndex = 65778;

	class HBAEJEHIOIO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BaseGameFlowContext*>* FKINCGODJEP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAEJEHIOIO_CTOR_OFFSET))(this);
		}

		::System::Boolean GNNPFBBMFLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAEJEHIOIO_GNNPFBBMFLA_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BaseGameFlowContext*>* DOGIEJMCING()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BaseGameFlowContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAEJEHIOIO_DOGIEJMCING_OFFSET))(this);
		}

		::System::Void BKJGMFOKKKN(::RPG::Client::BaseGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + HBAEJEHIOIO_BKJGMFOKKKN_OFFSET))(this, a1);
		}

		::System::Void GNCJAGHKEPO(::RPG::Client::BaseGameFlowContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + HBAEJEHIOIO_GNCJAGHKEPO_OFFSET))(this, a1);
		}

		::System::Void PKOLGKOMDPK(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + HBAEJEHIOIO_PKOLGKOMDPK_OFFSET))(this, a1, a2);
		}

		::System::Void AEKOJHIIEKM(::KLJANPDNDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLJANPDNDBJ*))((::PBYTE)hIl2Cpp + HBAEJEHIOIO_AEKOJHIIEKM_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBAEJEHIOIO_PJPFIHFAHGO_OFFSET))(this);
		}

	};
