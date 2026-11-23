#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace CriWare { class CriMonoBehaviour; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CRIWARE_CRIMONOBEHAVIOURMANAGER_A9BDDEBCF5382007_OFFSET UNITYSDK_OFFSET(0x2AB0B30)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_B7FAEC2571CD6ADA_OFFSET UNITYSDK_OFFSET(0x2AB0ED0)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_BA87A9E65F3420D1_OFFSET UNITYSDK_OFFSET(0x2AB06E0)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x2AB0C90)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_F5E407B60CCCAC07_OFFSET UNITYSDK_OFFSET(0x2AB0800)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_F7D068BC7F8ED55F_OFFSET UNITYSDK_OFFSET(0x2AB0990)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_FB808718E6D05ACC_OFFSET UNITYSDK_OFFSET(0x2AB0620)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2AB0530)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x2AB0E20)
#define CRIWARE_CRIMONOBEHAVIOURMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace CriWare
{
	inline static constexpr unsigned int CriMonoBehaviourManager_TypeDefinitionIndex = 19079;

	class CriMonoBehaviourManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::CriWare::CriMonoBehaviourManager** StaticGet_EAE0569B007CD057()
		{
			return (::CriWare::CriMonoBehaviourManager**)Il2CppClass::FromTypeDefinitionIndex(CriMonoBehaviourManager_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::List_1<::CriWare::CriMonoBehaviour*>** StaticGet_F71F3CDD1B227810()
		{
			return (::System::Collections::Generic::List_1<::CriWare::CriMonoBehaviour*>**)Il2CppClass::FromTypeDefinitionIndex(CriMonoBehaviourManager_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		::System::Boolean F7D068BC7F8ED55F(::CriWare::CriMonoBehaviour* E78CC7D0084F91E3)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriMonoBehaviour*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_F7D068BC7F8ED55F_OFFSET))(this, E78CC7D0084F91E3);
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_E02954280801633F_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER__CCTOR_OFFSET))();
		}

		static ::CriWare::CriMonoBehaviourManager* B7FAEC2571CD6ADA()
		{
			return ((::CriWare::CriMonoBehaviourManager*(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_B7FAEC2571CD6ADA_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Int32 BA87A9E65F3420D1(::CriWare::CriMonoBehaviour* E78CC7D0084F91E3)
		{
			return ((::System::Int32(*)(::CriWare::CriMonoBehaviour*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_BA87A9E65F3420D1_OFFSET))(E78CC7D0084F91E3);
		}

		static ::System::Void FB808718E6D05ACC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_FB808718E6D05ACC_OFFSET))();
		}

		static ::System::Boolean A9BDDEBCF5382007(::CriWare::CriMonoBehaviour* E78CC7D0084F91E3)
		{
			return ((::System::Boolean(*)(::CriWare::CriMonoBehaviour*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_A9BDDEBCF5382007_OFFSET))(E78CC7D0084F91E3);
		}

		::System::Void F5E407B60CCCAC07()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_F5E407B60CCCAC07_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMONOBEHAVIOURMANAGER_FDBCDBBFE02CD51A_OFFSET))(this);
		}
	};
}
