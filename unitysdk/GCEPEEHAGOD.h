#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define GCEPEEHAGOD_GGKEBLBMKDK_OFFSET UNITYSDK_OFFSET(0x15F11010)
#define GCEPEEHAGOD_HNKGKMGAMEH_OFFSET UNITYSDK_OFFSET(0x15F101E0)
#define GCEPEEHAGOD_IFNJEIBBHPN_OFFSET UNITYSDK_OFFSET(0x15F10910)
#define GCEPEEHAGOD_OMPEOEKFKNO_OFFSET UNITYSDK_OFFSET(0x15F10ED0)

inline static constexpr unsigned int GCEPEEHAGOD_TypeDefinitionIndex = 81737;

class GCEPEEHAGOD : public ::System::Object
{
public:
	static ::System::Void HNKGKMGAMEH(::System::String* MAIFBMEJPAB, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FONNJKACBDE, ::System::Action_2<::System::String*, ::System::Boolean>* HJAIOCIHMDP)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Action_2<::System::String*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + GCEPEEHAGOD_HNKGKMGAMEH_OFFSET))(MAIFBMEJPAB, FONNJKACBDE, HJAIOCIHMDP);
	}

	static ::System::Void IFNJEIBBHPN(::System::String* MAIFBMEJPAB, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FONNJKACBDE, ::System::Action_2<::System::String*, ::System::Boolean>* HJAIOCIHMDP)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Action_2<::System::String*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + GCEPEEHAGOD_IFNJEIBBHPN_OFFSET))(MAIFBMEJPAB, FONNJKACBDE, HJAIOCIHMDP);
	}

	static ::System::Void OMPEOEKFKNO(::System::String* MAIFBMEJPAB, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FONNJKACBDE, ::System::Action_2<::System::String*, ::System::Boolean>* HJAIOCIHMDP)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Action_2<::System::String*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + GCEPEEHAGOD_OMPEOEKFKNO_OFFSET))(MAIFBMEJPAB, FONNJKACBDE, HJAIOCIHMDP);
	}

	static ::System::Boolean GGKEBLBMKDK(::UnityEngine::Material* AEIHFBNNLBP, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FONNJKACBDE, ::System::Action_2<::System::String*, ::System::Boolean>* HJAIOCIHMDP, ::System::String*& OOONELGGOKM)
	{
		return ((::System::Boolean(*)(::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Action_2<::System::String*, ::System::Boolean>*, ::System::String*&))((::PBYTE)hIl2Cpp + GCEPEEHAGOD_GGKEBLBMKDK_OFFSET))(AEIHFBNNLBP, FONNJKACBDE, HJAIOCIHMDP, OOONELGGOKM);
	}
};
