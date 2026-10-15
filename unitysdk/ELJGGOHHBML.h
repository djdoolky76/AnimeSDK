#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define ELJGGOHHBML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1551A780)
#define ELJGGOHHBML_CTOR_OFFSET UNITYSDK_OFFSET(0x1551A770)
#define ELJGGOHHBML_DFIJDDDDDBC_OFFSET UNITYSDK_OFFSET(0x1551A520)
#define ELJGGOHHBML_OOAKPDFAKAC_OFFSET UNITYSDK_OFFSET(0x1551A3F0)

inline static constexpr unsigned int ELJGGOHHBML_TypeDefinitionIndex = 69836;

	class ELJGGOHHBML : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet_FGAMNKMFEAL()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)UnitySDK::FromName("", "ELJGGOHHBML")->GetStaticField(0xDED0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Material*>*>*>** StaticGet_BGPAHCAKLHB()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Il2CppArray<::UnityEngine::Material*>*>*>**)UnitySDK::FromName("", "ELJGGOHHBML")->GetStaticField(0xDED8);
		}

		static ::UnityEngine::MaterialPropertyBlock** StaticGet_IAKNMACGKNP()
		{
			return (::UnityEngine::MaterialPropertyBlock**)UnitySDK::FromName("", "ELJGGOHHBML")->GetStaticField(0xDEE0);
		}

		// static const ::System::Object HHPJHACLDEH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJGGOHHBML_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELJGGOHHBML_CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::Material*>* OOAKPDFAKAC(::System::Int32 a1)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + ELJGGOHHBML_OOAKPDFAKAC_OFFSET))(a1);
		}

		static ::System::Void DFIJDDDDDBC(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + ELJGGOHHBML_DFIJDDDDDBC_OFFSET))(a1);
		}

	};
