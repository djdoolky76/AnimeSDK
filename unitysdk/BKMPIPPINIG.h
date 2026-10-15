#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPNCAGDDHPO.h"
class GHHJNCOAIJF;
class HKNBPHAJEJF;
namespace System { class String; }

#define BKMPIPPINIG_AKBKDBEAPJJ_OFFSET UNITYSDK_OFFSET(0xBA60BD0)
#define BKMPIPPINIG_CTOR_1_OFFSET UNITYSDK_OFFSET(0xBA60870)
#define BKMPIPPINIG_CTOR_OFFSET UNITYSDK_OFFSET(0xBA60710)
#define BKMPIPPINIG_GET_PLATFORMRSP_OFFSET UNITYSDK_OFFSET(0xBA60BA0)
#define BKMPIPPINIG_GET_TRACEID_OFFSET UNITYSDK_OFFSET(0xBA60BF0)
#define BKMPIPPINIG_NEFFGHJDILF_OFFSET UNITYSDK_OFFSET(0xBA60BB0)

inline static constexpr unsigned int BKMPIPPINIG_TypeDefinitionIndex = 59314;

	class BKMPIPPINIG : public ::FPNCAGDDHPO
	{
	public:
		::HKNBPHAJEJF* _PlatformRsp_k__BackingField; // 0x90
		::System::String* _TraceID_k__BackingField; // 0x98
		::System::Void _ctor(::GHHJNCOAIJF* a1, ::HKNBPHAJEJF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHHJNCOAIJF*, ::HKNBPHAJEJF*))((::PBYTE)hIl2Cpp + BKMPIPPINIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::GHHJNCOAIJF* a1, ::HKNBPHAJEJF* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHHJNCOAIJF*, ::HKNBPHAJEJF*, ::System::String*))((::PBYTE)hIl2Cpp + BKMPIPPINIG_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::HKNBPHAJEJF* get_PlatformRsp()
		{
			return ((::HKNBPHAJEJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMPIPPINIG_GET_PLATFORMRSP_OFFSET))(this);
		}

		::System::Int32 NEFFGHJDILF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMPIPPINIG_NEFFGHJDILF_OFFSET))(this);
		}

		::System::String* AKBKDBEAPJJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMPIPPINIG_AKBKDBEAPJJ_OFFSET))(this);
		}

		::System::String* get_TraceID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKMPIPPINIG_GET_TRACEID_OFFSET))(this);
		}

	};
