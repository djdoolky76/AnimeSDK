#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/AI/NavMeshHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class NavMeshPath; }
namespace UnityEngine::AI { class NavMeshQueryAsyncOperation; }

#define PADEHMNLJBL_BBNNILIAHNH_OFFSET UNITYSDK_OFFSET(0x16F99C50)
#define PADEHMNLJBL_DLABNAMLENL_OFFSET UNITYSDK_OFFSET(0x16F99EB0)
#define PADEHMNLJBL_FKIENLLLDGO_OFFSET UNITYSDK_OFFSET(0x16F9A240)
#define PADEHMNLJBL_IPELNMCJAOK_OFFSET UNITYSDK_OFFSET(0x16F98FC0)
#define PADEHMNLJBL_LIBPGEIIEKF_OFFSET UNITYSDK_OFFSET(0x16F9A120)
#define PADEHMNLJBL_NMIHBJOGAGB_OFFSET UNITYSDK_OFFSET(0x16F99AA0)
#define PADEHMNLJBL_OMIIOFNIJGK_OFFSET UNITYSDK_OFFSET(0x16F9A370)
#define PADEHMNLJBL_PLEPJIBGFFN_OFFSET UNITYSDK_OFFSET(0x16F99140)

inline static constexpr unsigned int PADEHMNLJBL_TypeDefinitionIndex = 86756;

class PADEHMNLJBL : public ::System::Object
{
public:
	static ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::AI::NavMeshQueryAsyncOperation*> IPELNMCJAOK(::UnityEngine::Vector3 GOEADLFHLEJ, ::UnityEngine::Vector3 OIKMICDBAPP, ::System::UInt32 KGAHKGBMEAF, ::System::Int32 FODJHLJPGOE)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::AI::NavMeshQueryAsyncOperation*>(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + PADEHMNLJBL_IPELNMCJAOK_OFFSET))(GOEADLFHLEJ, OIKMICDBAPP, KGAHKGBMEAF, FODJHLJPGOE);
	}

	static ::System::Void PLEPJIBGFFN(::Il2CppArray<::UnityEngine::Vector3>* GLHGOPJOEBF, ::System::Int32 LPKKNLEKFKK, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* HLCCLLKOBFF, ::System::Single AMDGNAMFBGF, ::System::Single FAOPCOHPEBL, ::System::Boolean MGFOIEFAMNC, ::System::Boolean CGLLCEONNAC, ::System::Int32 BPKGCFEFAHC)
	{
		return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + PADEHMNLJBL_PLEPJIBGFFN_OFFSET))(GLHGOPJOEBF, LPKKNLEKFKK, HLCCLLKOBFF, AMDGNAMFBGF, FAOPCOHPEBL, MGFOIEFAMNC, CGLLCEONNAC, BPKGCFEFAHC);
	}

	static ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> NMIHBJOGAGB(::System::Single CKIMKCEGHKD, ::UnityEngine::Vector3 OLKHDAAGGAA, ::UnityEngine::Vector3 NJLNJCLGLNO, ::System::Single AMDGNAMFBGF, ::System::Single MIMBJALLBEB, ::System::Int32 LIMNECOMDOM)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + PADEHMNLJBL_NMIHBJOGAGB_OFFSET))(CKIMKCEGHKD, OLKHDAAGGAA, NJLNJCLGLNO, AMDGNAMFBGF, MIMBJALLBEB, LIMNECOMDOM);
	}

	static ::Cysharp::Threading::Tasks::UniTask BBNNILIAHNH(::UnityEngine::Vector3 GOEADLFHLEJ, ::UnityEngine::Vector3 OIKMICDBAPP, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* CFHNICGGPAF, ::System::UInt32 KGAHKGBMEAF, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* HLCCLLKOBFF, ::System::Single AMDGNAMFBGF, ::System::Single FAOPCOHPEBL, ::System::Boolean MGFOIEFAMNC, ::System::Boolean CGLLCEONNAC, ::System::Int32 BPKGCFEFAHC, ::System::Int32 FODJHLJPGOE, ::System::Action_1<::System::Boolean>* MIFLJHCELPN)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::UInt32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + PADEHMNLJBL_BBNNILIAHNH_OFFSET))(GOEADLFHLEJ, OIKMICDBAPP, CFHNICGGPAF, KGAHKGBMEAF, HLCCLLKOBFF, AMDGNAMFBGF, FAOPCOHPEBL, MGFOIEFAMNC, CGLLCEONNAC, BPKGCFEFAHC, FODJHLJPGOE, MIFLJHCELPN);
	}

	static ::System::Boolean DLABNAMLENL(::UnityEngine::AI::NavMeshPath* PEECGLCOPIC, ::UnityEngine::Vector3 GOEADLFHLEJ, ::UnityEngine::Vector3 OIKMICDBAPP, ::Il2CppArray<::UnityEngine::Vector3>*& GHKFFCOHHKE, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& CJBJONJDOLI, ::System::Single AMDGNAMFBGF, ::System::Single FAOPCOHPEBL, ::System::Boolean MGFOIEFAMNC, ::System::Boolean CGLLCEONNAC, ::System::Int32 BPKGCFEFAHC, ::System::Int32 FODJHLJPGOE)
	{
		return ((::System::Boolean(*)(::UnityEngine::AI::NavMeshPath*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*&, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PADEHMNLJBL_DLABNAMLENL_OFFSET))(PEECGLCOPIC, GOEADLFHLEJ, OIKMICDBAPP, GHKFFCOHHKE, CJBJONJDOLI, AMDGNAMFBGF, FAOPCOHPEBL, MGFOIEFAMNC, CGLLCEONNAC, BPKGCFEFAHC, FODJHLJPGOE);
	}

	static ::Cysharp::Threading::Tasks::UniTask_1<::System::Object*> LIBPGEIIEKF(::UnityEngine::Vector3 OLKHDAAGGAA, ::UnityEngine::Vector3 NJLNJCLGLNO, ::System::Int32 LIMNECOMDOM)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Object*>(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + PADEHMNLJBL_LIBPGEIIEKF_OFFSET))(OLKHDAAGGAA, NJLNJCLGLNO, LIMNECOMDOM);
	}

	static ::System::Boolean FKIENLLLDGO(::UnityEngine::Vector3 OHOGDOMNHNK, ::System::Int32 LIMNECOMDOM, ::UnityEngine::AI::NavMeshHit& OFLHPPDJLNL)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::AI::NavMeshHit&))((::PBYTE)hIl2Cpp + PADEHMNLJBL_FKIENLLLDGO_OFFSET))(OHOGDOMNHNK, LIMNECOMDOM, OFLHPPDJLNL);
	}

	static ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::System::Object*, ::System::Int32>> OMIIOFNIJGK(::UnityEngine::Vector3 GOEADLFHLEJ, ::UnityEngine::Vector3 OIKMICDBAPP, ::System::Int32 FODJHLJPGOE)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::System::Object*, ::System::Int32>>(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + PADEHMNLJBL_OMIIOFNIJGK_OFFSET))(GOEADLFHLEJ, OIKMICDBAPP, FODJHLJPGOE);
	}
};
