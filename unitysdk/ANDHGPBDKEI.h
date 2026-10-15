#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Sofa { class BaseSofaControl; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define ANDHGPBDKEI_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x15593230)
#define ANDHGPBDKEI_CMMLLEFOFFK_OFFSET UNITYSDK_OFFSET(0x15593360)
#define ANDHGPBDKEI_CTOR_OFFSET UNITYSDK_OFFSET(0x15592BE0)
#define ANDHGPBDKEI_EHFLDBMLBPM_OFFSET UNITYSDK_OFFSET(0x15592D60)
#define ANDHGPBDKEI_FHAKABPDEOE_OFFSET UNITYSDK_OFFSET(0x15592F80)
#define ANDHGPBDKEI_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x15592F30)
#define ANDHGPBDKEI_IHKIODHNGCE_OFFSET UNITYSDK_OFFSET(0x155935F0)
#define ANDHGPBDKEI_IMJGAEHILOC_OFFSET UNITYSDK_OFFSET(0x15593190)
#define ANDHGPBDKEI_MADGGPDJHMF_OFFSET UNITYSDK_OFFSET(0x15592FE0)
#define ANDHGPBDKEI_OAKBNCNJOHK_OFFSET UNITYSDK_OFFSET(0x15593550)

inline static constexpr unsigned int ANDHGPBDKEI_TypeDefinitionIndex = 50024;

	class ANDHGPBDKEI : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::Sofa::BaseSofaControl*>* LDMJPBNNHNM; // 0x10
		::System::Collections::Generic::List_1<::Sofa::BaseSofaControl*>* GKGOPMJCPKA; // 0x18
		::System::Collections::Generic::List_1<::Sofa::BaseSofaControl*>* IHEJBJCEAJA; // 0x20
		::System::Void _ctor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ANDHGPBDKEI_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDHGPBDKEI_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Boolean FHAKABPDEOE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDHGPBDKEI_FHAKABPDEOE_OFFSET))(this);
		}

		::System::Boolean MADGGPDJHMF(::System::Type* a1, ::Sofa::BaseSofaControl* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::Sofa::BaseSofaControl*))((::PBYTE)hIl2Cpp + ANDHGPBDKEI_MADGGPDJHMF_OFFSET))(this, a1, a2);
		}

		::System::Boolean ABKBOGIGAEH(::Sofa::BaseSofaControl* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Sofa::BaseSofaControl*))((::PBYTE)hIl2Cpp + ANDHGPBDKEI_ABKBOGIGAEH_OFFSET))(this, a1);
		}

		::System::Void CMMLLEFOFFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDHGPBDKEI_CMMLLEFOFFK_OFFSET))(this);
		}

		::System::Void OAKBNCNJOHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDHGPBDKEI_OAKBNCNJOHK_OFFSET))(this);
		}

		static ::System::Void EHFLDBMLBPM(::UnityEngine::Transform* a1, ::System::Collections::Generic::List_1<::Sofa::BaseSofaControl*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::Sofa::BaseSofaControl*>*))((::PBYTE)hIl2Cpp + ANDHGPBDKEI_EHFLDBMLBPM_OFFSET))(a1, a2);
		}

		static ::System::Boolean IHKIODHNGCE(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ANDHGPBDKEI_IHKIODHNGCE_OFFSET))(a1);
		}

		static ::System::Void IMJGAEHILOC(::Sofa::BaseSofaControl* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::Sofa::BaseSofaControl*, ::System::Boolean))((::PBYTE)hIl2Cpp + ANDHGPBDKEI_IMJGAEHILOC_OFFSET))(a1, a2);
		}

	};
