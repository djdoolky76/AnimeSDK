#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OCGNLGGKMID_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0x1EC5D5B0)
#define OCGNLGGKMID_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC5D750)
#define OCGNLGGKMID_DLOGLCGOIIL_OFFSET UNITYSDK_OFFSET(0x1EC5D500)
#define OCGNLGGKMID_NIOCBJAMEKC_OFFSET UNITYSDK_OFFSET(0x1EC5D6C0)
#define OCGNLGGKMID_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1EC5D630)

inline static constexpr unsigned int OCGNLGGKMID_TypeDefinitionIndex = 44109;

	class OCGNLGGKMID : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* GFOPFBIHFFE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGNLGGKMID_CTOR_OFFSET))(this);
		}

		::System::Object* DLOGLCGOIIL(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OCGNLGGKMID_DLOGLCGOIIL_OFFSET))(this, a1);
		}

		::System::Boolean AALCFBOGFKP(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OCGNLGGKMID_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGNLGGKMID_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Boolean NIOCBJAMEKC(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OCGNLGGKMID_NIOCBJAMEKC_OFFSET))(this, a1);
		}

	};
