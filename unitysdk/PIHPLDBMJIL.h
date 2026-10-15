#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class OFLIAAOJPJC;
class POGMNKLPKGM;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PIHPLDBMJIL_GJNMEHNIJLD_1_OFFSET UNITYSDK_OFFSET(0x1D2F0880)
#define PIHPLDBMJIL_GJNMEHNIJLD_2_OFFSET UNITYSDK_OFFSET(0x1D2F0AB0)
#define PIHPLDBMJIL_GJNMEHNIJLD_3_OFFSET UNITYSDK_OFFSET(0x1D2F0BF0)
#define PIHPLDBMJIL_GJNMEHNIJLD_OFFSET UNITYSDK_OFFSET(0x1D2F0650)
#define PIHPLDBMJIL_HLFIGAFJGEC_OFFSET UNITYSDK_OFFSET(0x1D2F0470)
#define PIHPLDBMJIL_LKGJFIMPCPD_OFFSET UNITYSDK_OFFSET(0x1D2E9B70)

inline static constexpr unsigned int PIHPLDBMJIL_TypeDefinitionIndex = 10828;

	class PIHPLDBMJIL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* HLFIGAFJGEC(::System::String* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::System::String*))((::PBYTE)hIl2Cpp + PIHPLDBMJIL_HLFIGAFJGEC_OFFSET))(a1);
		}

		static ::System::Byte LKGJFIMPCPD(::System::String* a1, ::System::Action_1<::FCOEMCEDLNL*>* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Byte(*)(::System::String*, ::System::Action_1<::FCOEMCEDLNL*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PIHPLDBMJIL_LKGJFIMPCPD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void GJNMEHNIJLD(::System::Boolean a1, ::System::String* a2, ::System::Object* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + PIHPLDBMJIL_GJNMEHNIJLD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void GJNMEHNIJLD_1(::System::Boolean a1, ::System::String* a2, ::System::Object* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + PIHPLDBMJIL_GJNMEHNIJLD_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void GJNMEHNIJLD_2(::System::Boolean a1, ::System::String* a2, ::OFLIAAOJPJC* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::OFLIAAOJPJC*, ::System::Boolean))((::PBYTE)hIl2Cpp + PIHPLDBMJIL_GJNMEHNIJLD_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void GJNMEHNIJLD_3(::System::Boolean a1, ::System::String* a2, ::POGMNKLPKGM* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::POGMNKLPKGM*, ::System::Boolean))((::PBYTE)hIl2Cpp + PIHPLDBMJIL_GJNMEHNIJLD_3_OFFSET))(a1, a2, a3, a4);
		}

	};
