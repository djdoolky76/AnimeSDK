#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMIKHDAIIMO.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KLEFGGIHGMI;
class LJFHKAJPFNE;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HANCMHGEOJM_CTOR_OFFSET UNITYSDK_OFFSET(0x15B8BB50)
#define HANCMHGEOJM_HCNNNELBIBC_OFFSET UNITYSDK_OFFSET(0x15B8BC90)
#define HANCMHGEOJM_HFHLAHLONIJ_OFFSET UNITYSDK_OFFSET(0x15B8C2E0)
#define HANCMHGEOJM_KGOMOMECIHL_OFFSET UNITYSDK_OFFSET(0x15B8BD90)
#define HANCMHGEOJM_LBHFAIAKKBO_OFFSET UNITYSDK_OFFSET(0x15B8BBE0)
#define HANCMHGEOJM_OCELGEGCHLH_OFFSET UNITYSDK_OFFSET(0x15B8BC20)
#define HANCMHGEOJM___N__0_OFFSET UNITYSDK_OFFSET(0x15B8CB60)

inline static constexpr unsigned int HANCMHGEOJM_TypeDefinitionIndex = 73883;

	class HANCMHGEOJM : public ::BMIKHDAIIMO
	{
	public:
		::System::Int32 KHBFNMDLILM; // 0x288
		::System::Int32 ENNBKAEMKHD; // 0x28C
		::System::Nullable_1<::UnityEngine::Vector3> ONAFKLJMHIH; // 0x290
		::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::LJFHKAJPFNE* a2, ::KLEFGGIHGMI* a3, ::UnityEngine::GameObject* a4, ::UnityEngine::GameObject* a5, ::System::Nullable_1<::UnityEngine::Vector3> a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::LJFHKAJPFNE*, ::KLEFGGIHGMI*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + HANCMHGEOJM_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void LBHFAIAKKBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANCMHGEOJM_LBHFAIAKKBO_OFFSET))(this);
		}

		::System::Collections::IEnumerator* OCELGEGCHLH()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANCMHGEOJM_OCELGEGCHLH_OFFSET))(this);
		}

		::System::Int32 HCNNNELBIBC(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + HANCMHGEOJM_HCNNNELBIBC_OFFSET))(this, a1);
		}

		::System::Void KGOMOMECIHL(::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + HANCMHGEOJM_KGOMOMECIHL_OFFSET))(this, a1);
		}

		::System::Void HFHLAHLONIJ(::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + HANCMHGEOJM_HFHLAHLONIJ_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANCMHGEOJM___N__0_OFFSET))(this);
		}

	};
