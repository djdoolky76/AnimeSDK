#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBGAECGPEFF_IterState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OBGAECGPEFF_EJADJCCBOAB.h"
namespace System { class Nullable; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define OBGAECGPEFF_IBNOOLIDCIG_ANJGFHEMIAK_OFFSET UNITYSDK_OFFSET(0xBD3FB50)
#define OBGAECGPEFF_IBNOOLIDCIG_CTOR_OFFSET UNITYSDK_OFFSET(0xBD40000)
#define OBGAECGPEFF_IBNOOLIDCIG_FJJOBECCOPN_OFFSET UNITYSDK_OFFSET(0xBD3F690)
#define OBGAECGPEFF_IBNOOLIDCIG_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xBD3F000)
#define OBGAECGPEFF_IBNOOLIDCIG_GOMGNDCDHIN_OFFSET UNITYSDK_OFFSET(0xBD3F740)
#define OBGAECGPEFF_IBNOOLIDCIG_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0xBD3F7E0)

	class OBGAECGPEFF_IBNOOLIDCIG : public ::System::Object
	{
	public:
		::System::Text::StringBuilder* NINEIMIEFHM; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* LCAPAJEHGAI; // 0x18
		::OBGAECGPEFF_IterState DLNIGFGLPLJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGAECGPEFF_IBNOOLIDCIG_CTOR_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OBGAECGPEFF_IBNOOLIDCIG_FPKLDCGAJGP_OFFSET))(this, a1);
		}

		::System::Void KHNCMBEFIKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGAECGPEFF_IBNOOLIDCIG_KHNCMBEFIKI_OFFSET))(this);
		}

		::System::Boolean ANJGFHEMIAK(::System::String* a1, ::OBGAECGPEFF_EJADJCCBOAB a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::OBGAECGPEFF_EJADJCCBOAB))((::PBYTE)hIl2Cpp + OBGAECGPEFF_IBNOOLIDCIG_ANJGFHEMIAK_OFFSET))(this, a1, a2);
		}

		::System::Nullable* GOMGNDCDHIN(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Nullable*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + OBGAECGPEFF_IBNOOLIDCIG_GOMGNDCDHIN_OFFSET))(this, a1, a2);
		}

		::System::Nullable* FJJOBECCOPN(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Nullable*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + OBGAECGPEFF_IBNOOLIDCIG_FJJOBECCOPN_OFFSET))(this, a1, a2);
		}

	};
