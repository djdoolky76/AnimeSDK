#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class CBDDODKFCIJ;
class CFMGIKJLMBJ;
class HDBIKLMCCCK;
class HKNDDPEJAKF;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS_ENDBIGSCENEDUNGEON_OFFSET UNITYSDK_OFFSET(0x156DF1F0)
#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS_ENDCURRENTXKOVDUNGEON_OFFSET UNITYSDK_OFFSET(0x156DF080)
#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS_ONBIGSCENEDUNGEONEND_OFFSET UNITYSDK_OFFSET(0x156DFD50)
#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS_REQUESTBIGSCENEDUNGEONEND_OFFSET UNITYSDK_OFFSET(0x156DFAF0)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int ExitDonjonUtils_TypeDefinitionIndex = 43275;

	class ExitDonjonUtils : public ::System::Object
	{
	public:
		static ::System::Threading::CancellationTokenSource** StaticGet__endBigSceneDungeonCts()
		{
			return (::System::Threading::CancellationTokenSource**)Il2CppClass::FromTypeDefinitionIndex(ExitDonjonUtils_TypeDefinitionIndex)->GetStaticField(0x43590);
		}

		static ::System::Void EndCurrentXKovDungeon(::System::Boolean success, ::System::Int32 escapeId, ::System::Action_2<::System::Boolean, ::CBDDODKFCIJ*>* onResultContextPrepared)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Action_2<::System::Boolean, ::CBDDODKFCIJ*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS_ENDCURRENTXKOVDUNGEON_OFFSET))(success, escapeId, onResultContextPrepared);
		}

		static ::System::Void EndBigSceneDungeon(::System::Boolean success, ::System::Action* onResultContextPrepared, ::System::Func_1<::HDBIKLMCCCK*>* onBuildEndBigSceneDungeon)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*, ::System::Func_1<::HDBIKLMCCCK*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS_ENDBIGSCENEDUNGEON_OFFSET))(success, onResultContextPrepared, onBuildEndBigSceneDungeon);
		}

		static ::System::Void RequestBigSceneDungeonEnd(::System::Boolean success, ::System::Action* onResultContextPrepared, ::System::Func_1<::HDBIKLMCCCK*>* onBuildEndBigSceneDungeon)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*, ::System::Func_1<::HDBIKLMCCCK*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS_REQUESTBIGSCENEDUNGEONEND_OFFSET))(success, onResultContextPrepared, onBuildEndBigSceneDungeon);
		}

		static ::Cysharp::Threading::Tasks::UniTask OnBigSceneDungeonEnd(::HKNDDPEJAKF* rsp, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* ntfs, ::System::Boolean success, ::System::Action* onResultContextPrepared, ::System::Threading::CancellationToken ct)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::HKNDDPEJAKF*, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*, ::System::Boolean, ::System::Action*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS_ONBIGSCENEDUNGEONEND_OFFSET))(rsp, ntfs, success, onResultContextPrepared, ct);
		}
	};
}
