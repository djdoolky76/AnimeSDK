#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJFAPMDGKMK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DLCLIMBJOAH_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0xF8965F0)
#define DLCLIMBJOAH_AGFJFNJAGNB_OFFSET UNITYSDK_OFFSET(0xF897270)
#define DLCLIMBJOAH_CPJKDMNEPMI_OFFSET UNITYSDK_OFFSET(0xF896980)
#define DLCLIMBJOAH_CTOR_OFFSET UNITYSDK_OFFSET(0xF897520)
#define DLCLIMBJOAH_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0xF896320)
#define DLCLIMBJOAH_FKJCGDMPEKF_OFFSET UNITYSDK_OFFSET(0xF896FE0)
#define DLCLIMBJOAH_HOGLEGMHBAO_OFFSET UNITYSDK_OFFSET(0xF896D70)
#define DLCLIMBJOAH_OCLLPOPDDNN_OFFSET UNITYSDK_OFFSET(0xF896AF0)

	class DLCLIMBJOAH : public ::System::Object
	{
	public:
		::BJFAPMDGKMK* GKNBCPMJHMN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCLIMBJOAH_CTOR_OFFSET))(this);
		}

		::System::Void EGFCFCBHJJP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DLCLIMBJOAH_EGFCFCBHJJP_OFFSET))(this, a1);
		}

		::System::Boolean AALCFBOGFKP(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DLCLIMBJOAH_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* CPJKDMNEPMI(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + DLCLIMBJOAH_CPJKDMNEPMI_OFFSET))(this, a1, a2);
		}

		static ::System::Void OCLLPOPDDNN(::BJFAPMDGKMK* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::BJFAPMDGKMK*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + DLCLIMBJOAH_OCLLPOPDDNN_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean HOGLEGMHBAO(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DLCLIMBJOAH_HOGLEGMHBAO_OFFSET))(this, a1);
		}

		::System::Boolean FKJCGDMPEKF(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DLCLIMBJOAH_FKJCGDMPEKF_OFFSET))(this, a1);
		}

		::System::Boolean AGFJFNJAGNB(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DLCLIMBJOAH_AGFJFNJAGNB_OFFSET))(this, a1);
		}

	};
