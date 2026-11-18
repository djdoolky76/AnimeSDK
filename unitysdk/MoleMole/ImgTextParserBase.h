#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::UI::Extension { class UIImgText; }

#define MOLEMOLE_IMGTEXTPARSERBASE_JADNONIJFPP_OFFSET UNITYSDK_OFFSET(0x180EFF40)
#define MOLEMOLE_IMGTEXTPARSERBASE_JIMGPANJFAD_OFFSET UNITYSDK_OFFSET(0x180EF4F0)
#define MOLEMOLE_IMGTEXTPARSERBASE_LIPEGBMCMJE_OFFSET UNITYSDK_OFFSET(0x180EFEA0)
#define MOLEMOLE_IMGTEXTPARSERBASE_NALHONEIFEO_OFFSET UNITYSDK_OFFSET(0x180EFE00)
#define MOLEMOLE_IMGTEXTPARSERBASE_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x180EF350)
#define MOLEMOLE_IMGTEXTPARSERBASE_SETKEY_OFFSET UNITYSDK_OFFSET(0x180EF770)
#define MOLEMOLE_IMGTEXTPARSERBASE_SETTEXTFUNCNOTCLEARFUNC_OFFSET UNITYSDK_OFFSET(0x180EF830)
#define MOLEMOLE_IMGTEXTPARSERBASE_SETTEXTFUNC_OFFSET UNITYSDK_OFFSET(0x180EF6B0)
#define MOLEMOLE_IMGTEXTPARSERBASE_SETTEXTNOTCLEARFUNC_OFFSET UNITYSDK_OFFSET(0x180EFC10)
#define MOLEMOLE_IMGTEXTPARSERBASE_SETTEXT_OFFSET UNITYSDK_OFFSET(0x180EFA20)
#define MOLEMOLE_IMGTEXTPARSERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x180EFE50)

namespace MoleMole
{
	inline static constexpr unsigned int ImgTextParserBase_TypeDefinitionIndex = 55325;

	class ImgTextParserBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* oriText; // 0x18
		::UnityEngine::UI::Extension::UIImgText* OOEHPMOECMP; // 0x20
		::System::Boolean MLOAECNLPCH; // 0x28
		::System::Byte _padding0[0x7];
		::System::Func_1<::System::String*>* EKPEIIMOMIB; // 0x30
		::System::String* NAFJLOEDKEC; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE__CTOR_OFFSET))(this);
		}

		::System::Void SetColor(::UnityEngine::Color JBBFCGAMDHI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE_SETCOLOR_OFFSET))(this, JBBFCGAMDHI);
		}

		::System::Void SetTextFunc(::System::Func_1<::System::String*>* HLCNFMGDBPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE_SETTEXTFUNC_OFFSET))(this, HLCNFMGDBPI);
		}

		::System::Void SetKey(::System::String* MCOHLHMKLIP)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE_SETKEY_OFFSET))(this, MCOHLHMKLIP);
		}

		::System::Void SetTextFuncNotClearFunc(::System::Func_1<::System::String*>* HLCNFMGDBPI, ::System::Boolean NPPMJEIPMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE_SETTEXTFUNCNOTCLEARFUNC_OFFSET))(this, HLCNFMGDBPI, NPPMJEIPMFC);
		}

		::System::Void SetText(::System::String* FCCLIEJAKLI, ::System::Boolean NPPMJEIPMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE_SETTEXT_OFFSET))(this, FCCLIEJAKLI, NPPMJEIPMFC);
		}

		::System::Void SetTextNotClearFunc(::System::String* FCCLIEJAKLI, ::System::Boolean NPPMJEIPMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE_SETTEXTNOTCLEARFUNC_OFFSET))(this, FCCLIEJAKLI, NPPMJEIPMFC);
		}

		::System::String* NALHONEIFEO(::System::String* FCCLIEJAKLI)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE_NALHONEIFEO_OFFSET))(this, FCCLIEJAKLI);
		}

		::System::String* LIPEGBMCMJE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE_LIPEGBMCMJE_OFFSET))(this);
		}

		::System::String* JADNONIJFPP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE_JADNONIJFPP_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UIImgText* JIMGPANJFAD()
		{
			return ((::UnityEngine::UI::Extension::UIImgText*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE_JIMGPANJFAD_OFFSET))(this);
		}
	};
}
