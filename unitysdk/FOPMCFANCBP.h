#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DNFFEFPKDPC;
class INMMPMDELKE;
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Tuple_4; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MonoBehaviour; }

#define FOPMCFANCBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA43A70)

inline static constexpr unsigned int FOPMCFANCBP_TypeDefinitionIndex = 43184;

	class FOPMCFANCBP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::INMMPMDELKE*, ::System::Tuple_2<::System::Collections::Generic::List_1<::DNFFEFPKDPC*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::DNFFEFPKDPC*>*>*>* HAJCDLBPHNG; // 0x10
		::System::Collections::Generic::List_1<::DNFFEFPKDPC*>* FGOAELOIAPF; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* MKBGMKJPLIM; // 0x20
		::System::Collections::Generic::Dictionary_2<::UnityEngine::MonoBehaviour*, ::DNFFEFPKDPC*>* BPHFHKHKIBN; // 0x28
		::UnityEngine::Material* FBNAJJMOPMB; // 0x30
		::System::Collections::Generic::Dictionary_2<::INMMPMDELKE*, ::System::Collections::Generic::HashSet_1<::DNFFEFPKDPC*>*>* MABIPJBKNMA; // 0x38
		::System::Collections::Generic::Dictionary_2<::UnityEngine::MonoBehaviour*, ::System::Tuple_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion>*>* DPDBKFOMMNK; // 0x40
		::System::Int32 OAKEIHCLENN; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOPMCFANCBP_CTOR_OFFSET))(this);
		}

	};
