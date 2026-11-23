#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A0E4ACEBA0BB3B8E.h"
#include "unitysdk/AE84D63934AAEEBB.h"
#include "unitysdk/B5050D968B3B2C4D.h"
#include "unitysdk/E98D411E61793C70.h"
#include "unitysdk/EB78A515455ADEEE.h"
#include "unitysdk/FC3B826B15C2C608.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace TMPro { class TMP_Text; }

#define TMPRO_TMP_TEXTINFO_CLEARLINEINFO_OFFSET UNITYSDK_OFFSET(0x40C2250)
#define TMPRO_TMP_TEXTINFO_CLEARMESHINFO_OFFSET UNITYSDK_OFFSET(0x40C25C0)
#define TMPRO_TMP_TEXTINFO_CLEARPAGEINFO_OFFSET UNITYSDK_OFFSET(0x40C2690)
#define TMPRO_TMP_TEXTINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x40C2810)
#define TMPRO_TMP_TEXTINFO_COPYMESHINFOVERTEXDATA_OFFSET UNITYSDK_OFFSET(0x40C2890)
#define TMPRO_TMP_TEXTINFO_RESETVERTEXLAYOUT_OFFSET UNITYSDK_OFFSET(0x40C2E80)
#define TMPRO_TMP_TEXTINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x40C2F50)
#define TMPRO_TMP_TEXTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x40C32C0)
#define TMPRO_TMP_TEXTINFO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x40C30F0)
#define TMPRO_TMP_TEXTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x40C2FB0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_TextInfo_TypeDefinitionIndex = 18271;

	class TMP_TextInfo : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2* StaticGet_k_InfinityVectorPositive()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(TMP_TextInfo_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::UnityEngine::Vector2* StaticGet_k_InfinityVectorNegative()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(TMP_TextInfo_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		::TMPro::TMP_Text* textComponent; // 0x10
		::System::Int32 characterCount; // 0x18
		::System::Int32 spriteCount; // 0x1C
		::System::Int32 spaceCount; // 0x20
		::System::Int32 wordCount; // 0x24
		::System::Int32 linkCount; // 0x28
		::System::Int32 lineCount; // 0x2C
		::System::Int32 pageCount; // 0x30
		::System::Int32 materialCount; // 0x34
		::Il2CppArray<::A0E4ACEBA0BB3B8E>* characterInfo; // 0x38
		::Il2CppArray<::E98D411E61793C70>* wordInfo; // 0x40
		::Il2CppArray<::FC3B826B15C2C608>* linkInfo; // 0x48
		::Il2CppArray<::AE84D63934AAEEBB>* lineInfo; // 0x50
		::Il2CppArray<::EB78A515455ADEEE>* pageInfo; // 0x58
		::Il2CppArray<::B5050D968B3B2C4D>* meshInfo; // 0x60
		::Il2CppArray<::B5050D968B3B2C4D>* m_CachedMeshInfo; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO__CTOR_OFFSET))(this);
		}

		::System::Void ClearMeshInfo(::System::Boolean BDFBAA599C0CBC22)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_CLEARMESHINFO_OFFSET))(this, BDFBAA599C0CBC22);
		}

		::System::Void ClearPageInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_CLEARPAGEINFO_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 B6FDB8AB2941DCA8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO__CTOR_1_OFFSET))(this, B6FDB8AB2941DCA8);
		}

		::Il2CppArray<::B5050D968B3B2C4D>* CopyMeshInfoVertexData()
		{
			return ((::Il2CppArray<::B5050D968B3B2C4D>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_COPYMESHINFOVERTEXDATA_OFFSET))(this);
		}

		::System::Void ClearLineInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_CLEARLINEINFO_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_CLEAR_OFFSET))(this);
		}

		::System::Void ResetVertexLayout(::System::Boolean A1F3FF05831C709A)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_RESETVERTEXLAYOUT_OFFSET))(this, A1F3FF05831C709A);
		}

		::System::Void _ctor_2(::TMPro::TMP_Text* B211666AC084BB8B)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO__CTOR_2_OFFSET))(this, B211666AC084BB8B);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO__CCTOR_OFFSET))();
		}
	};
}
