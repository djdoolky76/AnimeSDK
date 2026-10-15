#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define GBLCFNFIDEO_KNANDOFFEJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD59220)

inline static constexpr unsigned int GBLCFNFIDEO_KNANDOFFEJF_TypeDefinitionIndex = 6264;

	class GBLCFNFIDEO_KNANDOFFEJF : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::MVector3>* LJDHGFECMHJ; // 0x10
		::Il2CppArray<::System::Int32>* DEJPMFANBNK; // 0x18
		::RPG::MVector3 EFNAJMADAHM; // 0x20
		::System::Boolean MFIOOONDGJF; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Int32 EIHHMIHLGLE; // 0x30
		::RPG::MVector3 NKAACMGNNPK; // 0x34
		::System::Single EODLMJJCHJP; // 0x40
		::RPG::MVector3 GNOKDJHJJAB; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_KNANDOFFEJF_CTOR_OFFSET))(this);
		}

	};
