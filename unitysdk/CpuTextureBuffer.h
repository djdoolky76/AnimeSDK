#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace UnityEngine { class Texture2D; }

#define CPUTEXTUREBUFFER_AKOPKCBIKFA_OFFSET UNITYSDK_OFFSET(0xE916C50)
#define CPUTEXTUREBUFFER_CBCIIPLJNGB_OFFSET UNITYSDK_OFFSET(0xE916EB0)
#define CPUTEXTUREBUFFER_CTOR_OFFSET UNITYSDK_OFFSET(0xE917320)
#define CPUTEXTUREBUFFER_GDMLNGENNHO_OFFSET UNITYSDK_OFFSET(0xE916DE0)
#define CPUTEXTUREBUFFER_GET_DATACOUNT_OFFSET UNITYSDK_OFFSET(0xE916B90)
#define CPUTEXTUREBUFFER_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xE916B80)
#define CPUTEXTUREBUFFER_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xE916B70)
#define CPUTEXTUREBUFFER_HAIHHFOPBLN_OFFSET UNITYSDK_OFFSET(0xE916FE0)
#define CPUTEXTUREBUFFER_LLBFLDPGGNN_OFFSET UNITYSDK_OFFSET(0xE917060)
#define CPUTEXTUREBUFFER_MGPCEEKGIMK_OFFSET UNITYSDK_OFFSET(0xE916BE0)

inline static constexpr unsigned int CpuTextureBuffer_TypeDefinitionIndex = 48513;

	class CpuTextureBuffer : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Int32 width; // 0x18
		::System::Int32 height; // 0x1C
		::Il2CppArray<::System::Single>* data; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPUTEXTUREBUFFER_CTOR_OFFSET))(this);
		}

		::System::Int32 get_Width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPUTEXTUREBUFFER_GET_WIDTH_OFFSET))(this);
		}

		::System::Int32 get_Height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPUTEXTUREBUFFER_GET_HEIGHT_OFFSET))(this);
		}

		::System::Int32 get_DataCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPUTEXTUREBUFFER_GET_DATACOUNT_OFFSET))(this);
		}

		::System::Single MGPCEEKGIMK(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CPUTEXTUREBUFFER_MGPCEEKGIMK_OFFSET))(this, a1);
		}

		::System::Void AKOPKCBIKFA(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CPUTEXTUREBUFFER_AKOPKCBIKFA_OFFSET))(this, a1);
		}

		::System::Int32 GDMLNGENNHO(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CPUTEXTUREBUFFER_GDMLNGENNHO_OFFSET))(this, a1, a2);
		}

		::System::Single CBCIIPLJNGB(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CPUTEXTUREBUFFER_CBCIIPLJNGB_OFFSET))(this, a1, a2);
		}

		::System::Single HAIHHFOPBLN(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CPUTEXTUREBUFFER_HAIHHFOPBLN_OFFSET))(this, a1, a2, a3);
		}

		::System::Single LLBFLDPGGNN(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CPUTEXTUREBUFFER_LLBFLDPGGNN_OFFSET))(this, a1, a2);
		}

	};
