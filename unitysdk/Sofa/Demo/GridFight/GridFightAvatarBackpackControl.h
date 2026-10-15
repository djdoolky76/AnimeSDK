#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOMFNEIKBAO.h"
class ALAHCOICOLM;
class HIKAAGHELPH;
class JJLLMEENHJC;
class OCGNLGGKMID;
class PPAGOKHODLP;
namespace Sofa::Demo::GridFight { class GridFightAvatarBackpackSlotControl; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE977CA0)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__APPLYCOMPOSEVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xE977120)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE975DD0)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__GETCOMPOSETRANSFORMS_OFFSET UNITYSDK_OFFSET(0xE977BE0)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__GETCOMPOSEVIEWMODELS_OFFSET UNITYSDK_OFFSET(0xE977B20)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__MOVECOMPOSEMATERIAL_OFFSET UNITYSDK_OFFSET(0xE977760)
#define SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__POPULATING_OFFSET UNITYSDK_OFFSET(0xE976390)

namespace Sofa::Demo::GridFight
{
	class GridFightAvatarBackpackControl
	{
	public:
		::UnityEngine::RectTransform* _SlotListRoot; // 0x70
		::UnityEngine::RectTransform* _OverridePanelRoot; // 0x78
		::System::Collections::Generic::List_1<::Sofa::Demo::GridFight::GridFightAvatarBackpackSlotControl*>* _SlotList; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__BINDING_OFFSET))(this, a1);
		}

		::System::Void _Populating(::JJLLMEENHJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJLLMEENHJC*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__POPULATING_OFFSET))(this, a1);
		}

		static ::System::Void _ApplyComposeViewModels(::System::Collections::Generic::IReadOnlyList_1<::ALAHCOICOLM*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IReadOnlyList_1<::ALAHCOICOLM*>*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__APPLYCOMPOSEVIEWMODELS_OFFSET))(a1);
		}

		static ::FOMFNEIKBAO _MoveComposeMaterial(::FOMFNEIKBAO a1, ::System::Int32 a2)
		{
			return ((::FOMFNEIKBAO(*)(::FOMFNEIKBAO, ::System::Int32))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__MOVECOMPOSEMATERIAL_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::ALAHCOICOLM*>* _GetComposeViewModels(::OCGNLGGKMID* a1)
		{
			return ((::System::Collections::Generic::List_1<::ALAHCOICOLM*>*(*)(::OCGNLGGKMID*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__GETCOMPOSEVIEWMODELS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _GetComposeTransforms(::OCGNLGGKMID* a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::OCGNLGGKMID*))((::PBYTE)hIl2Cpp + SOFA_DEMO_GRIDFIGHT_GRIDFIGHTAVATARBACKPACKCONTROL__GETCOMPOSETRANSFORMS_OFFSET))(a1);
		}

	};
}
