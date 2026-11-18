#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class CameraPositionData; }
namespace MoleMole { class GameObjectPositionData; }
namespace MoleMole { class PerformerPositionData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CINEMANPCOFFSETSO_AHAOLEDCGHK_OFFSET UNITYSDK_OFFSET(0xFA9E640)
#define MOLEMOLE_CINEMANPCOFFSETSO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0xFA9DDA0)
#define MOLEMOLE_CINEMANPCOFFSETSO_BPIMJLAIFMC_OFFSET UNITYSDK_OFFSET(0xFA9EAC0)
#define MOLEMOLE_CINEMANPCOFFSETSO_EBCFEHBPKON_OFFSET UNITYSDK_OFFSET(0xFA9D940)
#define MOLEMOLE_CINEMANPCOFFSETSO_GET_CAMERADICT_OFFSET UNITYSDK_OFFSET(0xFA9D9C0)
#define MOLEMOLE_CINEMANPCOFFSETSO_GET_PERFORMERDICT_OFFSET UNITYSDK_OFFSET(0xFA9D9B0)
#define MOLEMOLE_CINEMANPCOFFSETSO_IGGMMEFBNNH_OFFSET UNITYSDK_OFFSET(0xFA9E8A0)
#define MOLEMOLE_CINEMANPCOFFSETSO_LAJCOPJAEHM_OFFSET UNITYSDK_OFFSET(0xFA9DAB0)
#define MOLEMOLE_CINEMANPCOFFSETSO_OMBBFKNAMIO_OFFSET UNITYSDK_OFFSET(0xFA9E430)
#define MOLEMOLE_CINEMANPCOFFSETSO__CTOR_OFFSET UNITYSDK_OFFSET(0xFA9D9D0)

namespace MoleMole
{
	inline static constexpr unsigned int CinemaNpcOffsetSo_TypeDefinitionIndex = 72051;

	class CinemaNpcOffsetSo : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::PerformerPositionData*>* _performerDatas; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PerformerPositionData*>* _performerDict; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::CameraPositionData*>*>* _cameraDict; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO__CTOR_OFFSET))(this);
		}

		::System::String* EBCFEHBPKON()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO_EBCFEHBPKON_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PerformerPositionData*>* get_PerformerDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::PerformerPositionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO_GET_PERFORMERDICT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::CameraPositionData*>*>* get_CameraDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::CameraPositionData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO_GET_CAMERADICT_OFFSET))(this);
		}

		::MoleMole::PerformerPositionData* LAJCOPJAEHM(::System::Int32 NMPKGJELPFH)
		{
			return ((::MoleMole::PerformerPositionData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO_LAJCOPJAEHM_OFFSET))(this, NMPKGJELPFH);
		}

		::System::Collections::Generic::List_1<::MoleMole::GameObjectPositionData*>* OMBBFKNAMIO(::System::Int32 NMPKGJELPFH, ::System::Int32 FKMIBGLCHHC)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::GameObjectPositionData*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO_OMBBFKNAMIO_OFFSET))(this, NMPKGJELPFH, FKMIBGLCHHC);
		}

		::System::Void BBOMJDBNHIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO_BBOMJDBNHIC_OFFSET))(this);
		}

		::MoleMole::CameraPositionData* AHAOLEDCGHK(::System::Int32 NMPKGJELPFH, ::System::Int32 FKMIBGLCHHC)
		{
			return ((::MoleMole::CameraPositionData*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO_AHAOLEDCGHK_OFFSET))(this, NMPKGJELPFH, FKMIBGLCHHC);
		}

		::MoleMole::GameObjectPositionData* IGGMMEFBNNH(::System::Int32 NMPKGJELPFH, ::System::Int32 FKMIBGLCHHC, ::System::String* IFIKDGDNHFO)
		{
			return ((::MoleMole::GameObjectPositionData*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO_IGGMMEFBNNH_OFFSET))(this, NMPKGJELPFH, FKMIBGLCHHC, IFIKDGDNHFO);
		}

		::System::Void BPIMJLAIFMC(::System::Int32 NMPKGJELPFH, ::System::Int32 FKMIBGLCHHC, ::System::String* IFIKDGDNHFO, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 BFBELMDIAHI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMANPCOFFSETSO_BPIMJLAIFMC_OFFSET))(this, NMPKGJELPFH, FKMIBGLCHHC, IFIKDGDNHFO, OHOGDOMNHNK, BFBELMDIAHI);
		}
	};
}
