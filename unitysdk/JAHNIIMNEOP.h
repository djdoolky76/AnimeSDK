#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ABNHNCJJPDH.h"
#include "unitysdk/EJILHEKANCL.h"
#include "unitysdk/UnityEngine/UI/Extension/LinkBoundsInfo.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JAHNIIMNEOP_AFBDGLCGDJF_OFFSET UNITYSDK_OFFSET(0x15C31060)
#define JAHNIIMNEOP_AFKDDBKDFGD_OFFSET UNITYSDK_OFFSET(0x15C31E60)
#define JAHNIIMNEOP_CHPJMDOEHFC_1_OFFSET UNITYSDK_OFFSET(0x15C315C0)
#define JAHNIIMNEOP_CHPJMDOEHFC_OFFSET UNITYSDK_OFFSET(0x15C31250)
#define JAHNIIMNEOP_FAMKKNANKCE_OFFSET UNITYSDK_OFFSET(0x15C30C10)
#define JAHNIIMNEOP_IBIMFIHHNAD_OFFSET UNITYSDK_OFFSET(0x15C31CD0)
#define JAHNIIMNEOP_MLDIKOOFEJP_OFFSET UNITYSDK_OFFSET(0x15C319E0)
#define JAHNIIMNEOP_ONOKFAKLBOL_OFFSET UNITYSDK_OFFSET(0x15C31430)

inline static constexpr unsigned int JAHNIIMNEOP_TypeDefinitionIndex = 73912;

class JAHNIIMNEOP : public ::System::Object
{
public:
	static ::System::Boolean FAMKKNANKCE(::EJILHEKANCL PHHDHIBOCKA, ::UnityEngine::Transform* BMPJEBKPMOI, ::ABNHNCJJPDH& FKKKPJPNCGM)
	{
		return ((::System::Boolean(*)(::EJILHEKANCL, ::UnityEngine::Transform*, ::ABNHNCJJPDH&))((::PBYTE)hIl2Cpp + JAHNIIMNEOP_FAMKKNANKCE_OFFSET))(PHHDHIBOCKA, BMPJEBKPMOI, FKKKPJPNCGM);
	}

	static ::UnityEngine::Rect AFBDGLCGDJF(::UnityEngine::RectTransform* IKDPJOKLFFA, ::UnityEngine::Rect MJAIMIENCOG, ::UnityEngine::Transform* BMPJEBKPMOI)
	{
		return ((::UnityEngine::Rect(*)(::UnityEngine::RectTransform*, ::UnityEngine::Rect, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JAHNIIMNEOP_AFBDGLCGDJF_OFFSET))(IKDPJOKLFFA, MJAIMIENCOG, BMPJEBKPMOI);
	}

	static ::System::Boolean CHPJMDOEHFC(::UnityEngine::UI::Extension::UILocalizationText* FCCLIEJAKLI, ::System::Boolean BHLLFKICOHC, ::UnityEngine::Rect& FEOPCCIMFJP)
	{
		return ((::System::Boolean(*)(::UnityEngine::UI::Extension::UILocalizationText*, ::System::Boolean, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + JAHNIIMNEOP_CHPJMDOEHFC_OFFSET))(FCCLIEJAKLI, BHLLFKICOHC, FEOPCCIMFJP);
	}

	static ::System::Boolean ONOKFAKLBOL(::UnityEngine::UI::Extension::UILocalizationText* FCCLIEJAKLI, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UI::Extension::LinkBoundsInfo>*& GLPAAOCAHFG)
	{
		return ((::System::Boolean(*)(::UnityEngine::UI::Extension::UILocalizationText*, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UI::Extension::LinkBoundsInfo>*&))((::PBYTE)hIl2Cpp + JAHNIIMNEOP_ONOKFAKLBOL_OFFSET))(FCCLIEJAKLI, GLPAAOCAHFG);
	}

	static ::System::Boolean MLDIKOOFEJP(::EJILHEKANCL PHHDHIBOCKA, ::UnityEngine::UI::Extension::LinkBoundsInfo& NKBEHKDHCLE)
	{
		return ((::System::Boolean(*)(::EJILHEKANCL, ::UnityEngine::UI::Extension::LinkBoundsInfo&))((::PBYTE)hIl2Cpp + JAHNIIMNEOP_MLDIKOOFEJP_OFFSET))(PHHDHIBOCKA, NKBEHKDHCLE);
	}

	static ::System::Boolean CHPJMDOEHFC_1(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UI::Extension::LinkBoundsInfo>* GLPAAOCAHFG, ::System::Boolean BHLLFKICOHC, ::UnityEngine::Rect& FEOPCCIMFJP)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UI::Extension::LinkBoundsInfo>*, ::System::Boolean, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + JAHNIIMNEOP_CHPJMDOEHFC_1_OFFSET))(GLPAAOCAHFG, BHLLFKICOHC, FEOPCCIMFJP);
	}

	static ::System::Void IBIMFIHHNAD(::EJILHEKANCL PHHDHIBOCKA, ::UnityEngine::Transform* BMPJEBKPMOI, ::System::Collections::Generic::List_1<::UnityEngine::Rect>* AJMCCOEAIFE)
	{
		return ((::System::Void(*)(::EJILHEKANCL, ::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::UnityEngine::Rect>*))((::PBYTE)hIl2Cpp + JAHNIIMNEOP_IBIMFIHHNAD_OFFSET))(PHHDHIBOCKA, BMPJEBKPMOI, AJMCCOEAIFE);
	}

	static ::System::Boolean AFKDDBKDFGD(::EJILHEKANCL PHHDHIBOCKA, ::UnityEngine::Vector3& HAOPCCKGHAO)
	{
		return ((::System::Boolean(*)(::EJILHEKANCL, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + JAHNIIMNEOP_AFKDDBKDFGD_OFFSET))(PHHDHIBOCKA, HAOPCCKGHAO);
	}
};
