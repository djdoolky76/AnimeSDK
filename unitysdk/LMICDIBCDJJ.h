#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Object; }

#define LMICDIBCDJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFCE330)
#define LMICDIBCDJJ_FHJFAACBEPM_OFFSET UNITYSDK_OFFSET(0x1AFCE3D0)
#define LMICDIBCDJJ_GPIDPKOBNIJ_OFFSET UNITYSDK_OFFSET(0x1AFCE350)
#define LMICDIBCDJJ_KJMDJMBNCPE_OFFSET UNITYSDK_OFFSET(0x1AFCE430)

inline static constexpr unsigned int LMICDIBCDJJ_TypeDefinitionIndex = 75835;

	class LMICDIBCDJJ : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_GKNCPKCLMPJ()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LMICDIBCDJJ")->GetStaticField(0xB950);
		}

		static ::System::Boolean* StaticGet_DFKKLPMLNGH()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LMICDIBCDJJ")->GetStaticField(0xB951);
		}

		static ::System::Int32* StaticGet_LIPHEJCBPBD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LMICDIBCDJJ")->GetStaticField(0xB954);
		}

		// static const ::System::Object HEFNCMFOKLG; // 0x0
		// static const ::System::Object ABCJMLEBDMF; // 0x0
		// static const ::System::Object DIELFCLPFIM; // 0x0
		// static const ::System::Object GOHMKFABOFC; // 0x0
		// static const ::System::String* JECKIIMJHCM; // 0x0
		// static const ::System::String* ILMPMHJHELJ; // 0x0
		// static const ::System::String* DAPLHPKANIG; // 0x0
		// static const ::System::String* LFEGPKAFEBJ; // 0x0
		// static const ::System::String* PDGLBLKPEOM; // 0x0
		// static const ::System::String* INPAEJJLKNL; // 0x0
		// static const ::System::String* GDGMKFHNCHH; // 0x0
		// static const ::System::String* AAMLBKACGNJ; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMICDIBCDJJ_CCTOR_OFFSET))();
		}

		static ::System::Void GPIDPKOBNIJ(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + LMICDIBCDJJ_GPIDPKOBNIJ_OFFSET))(a1);
		}

		static ::UnityEngine::ComputeShader* FHJFAACBEPM(::System::String* a1)
		{
			return ((::UnityEngine::ComputeShader*(*)(::System::String*))((::PBYTE)hIl2Cpp + LMICDIBCDJJ_FHJFAACBEPM_OFFSET))(a1);
		}

		static ::System::Void KJMDJMBNCPE(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + LMICDIBCDJJ_KJMDJMBNCPE_OFFSET))(a1);
		}

	};
