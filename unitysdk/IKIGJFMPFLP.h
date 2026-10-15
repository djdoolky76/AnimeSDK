#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define IKIGJFMPFLP_CBAACMCLDPH_OFFSET UNITYSDK_OFFSET(0x16480AF0)
#define IKIGJFMPFLP_CTOR_OFFSET UNITYSDK_OFFSET(0x16480B90)
#define IKIGJFMPFLP_HBAOMEBJKGM_OFFSET UNITYSDK_OFFSET(0x16480AA0)
#define IKIGJFMPFLP_MBGGDMCLMPO_OFFSET UNITYSDK_OFFSET(0x16480B40)

inline static constexpr unsigned int IKIGJFMPFLP_TypeDefinitionIndex = 49645;

	class IKIGJFMPFLP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKIGJFMPFLP_CTOR_OFFSET))(this);
		}

		static ::System::Void HBAOMEBJKGM(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + IKIGJFMPFLP_HBAOMEBJKGM_OFFSET))(a1, a2);
		}

		static ::System::Void CBAACMCLDPH(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + IKIGJFMPFLP_CBAACMCLDPH_OFFSET))(a1, a2);
		}

		static ::System::Void MBGGDMCLMPO(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + IKIGJFMPFLP_MBGGDMCLMPO_OFFSET))(a1, a2);
		}

	};
