#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class NetPacket; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class MethodInfo; }

#define JKCFJDMLGPK_AFCBGKBIMGD_OFFSET UNITYSDK_OFFSET(0xB213E50)
#define JKCFJDMLGPK_CKILLPHFBBC_OFFSET UNITYSDK_OFFSET(0xB214610)
#define JKCFJDMLGPK_IDAPGCJFDKH_OFFSET UNITYSDK_OFFSET(0xB212EA0)
#define JKCFJDMLGPK_JDDDELPMCPO_OFFSET UNITYSDK_OFFSET(0xB2133D0)
#define JKCFJDMLGPK_LFBJFKDFMKL_OFFSET UNITYSDK_OFFSET(0xB212FA0)
#define JKCFJDMLGPK_OEFMMGBIFCJ_OFFSET UNITYSDK_OFFSET(0xB212BA0)
#define JKCFJDMLGPK_OPFINEFCNJC_OFFSET UNITYSDK_OFFSET(0xB213640)

	class JKCFJDMLGPK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>* OEFMMGBIFCJ()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + JKCFJDMLGPK_OEFMMGBIFCJ_OFFSET))();
		}

		static ::System::Boolean IDAPGCJFDKH(::System::UInt16 a1, ::RPG::Client::NetPacket* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Action*>* a3)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::RPG::Client::NetPacket*, ::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Action*>*))((::PBYTE)hIl2Cpp + JKCFJDMLGPK_IDAPGCJFDKH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LFBJFKDFMKL(::System::Object* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Action*>* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Action*>*))((::PBYTE)hIl2Cpp + JKCFJDMLGPK_LFBJFKDFMKL_OFFSET))(a1, a2);
		}

		static ::System::String* CKILLPHFBBC(::System::Object* a1)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + JKCFJDMLGPK_CKILLPHFBBC_OFFSET))(a1);
		}

		static ::System::Boolean JDDDELPMCPO(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + JKCFJDMLGPK_JDDDELPMCPO_OFFSET))(a1, a2);
		}

		static ::System::Boolean OPFINEFCNJC(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + JKCFJDMLGPK_OPFINEFCNJC_OFFSET))(a1, a2);
		}

		static ::System::Boolean AFCBGKBIMGD(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + JKCFJDMLGPK_AFCBGKBIMGD_OFFSET))(a1, a2);
		}

	};
