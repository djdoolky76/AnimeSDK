#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E7ED61E0B00DDE0C/AE3A186DFD4FC306_FE39A02657F01788.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define E7ED61E0B00DDE0C_AE3A186DFD4FC306_A313240F72D08FF1_OFFSET UNITYSDK_OFFSET(0x2A43BA0)
#define E7ED61E0B00DDE0C_AE3A186DFD4FC306_AED92AFEB63E7069_OFFSET UNITYSDK_OFFSET(0x2A43F00)
#define E7ED61E0B00DDE0C_AE3A186DFD4FC306_BB41322D553FFB1A_OFFSET UNITYSDK_OFFSET(0x2A43DE0)
#define E7ED61E0B00DDE0C_AE3A186DFD4FC306_F3E546EFACD54F09_OFFSET UNITYSDK_OFFSET(0x2A43E50)
#define E7ED61E0B00DDE0C_AE3A186DFD4FC306__CCTOR_OFFSET UNITYSDK_OFFSET(0x2A44250)

namespace E7ED61E0B00DDE0C
{
	inline static constexpr unsigned int AE3A186DFD4FC306_TypeDefinitionIndex = 18304;

	class AE3A186DFD4FC306 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::Object*>** StaticGet_A805AA33C92FC2E0()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AE3A186DFD4FC306_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Transform*>** StaticGet_A5398365E6D14F22()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(AE3A186DFD4FC306_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Single* StaticGet_F16B99A42B96B015()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AE3A186DFD4FC306_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Void BB41322D553FFB1A()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E7ED61E0B00DDE0C_AE3A186DFD4FC306_BB41322D553FFB1A_OFFSET))();
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E7ED61E0B00DDE0C_AE3A186DFD4FC306__CCTOR_OFFSET))();
		}

		static ::System::Void AED92AFEB63E7069(::E7ED61E0B00DDE0C::AE3A186DFD4FC306_FE39A02657F01788 BB51ACFC0174A153)
		{
			return ((::System::Void(*)(::E7ED61E0B00DDE0C::AE3A186DFD4FC306_FE39A02657F01788))((::PBYTE)hIl2Cpp + E7ED61E0B00DDE0C_AE3A186DFD4FC306_AED92AFEB63E7069_OFFSET))(BB51ACFC0174A153);
		}

		static ::E7ED61E0B00DDE0C::AE3A186DFD4FC306_FE39A02657F01788 A313240F72D08FF1(::UnityEngine::Transform* F249A74E7BFBE1A7)
		{
			return ((::E7ED61E0B00DDE0C::AE3A186DFD4FC306_FE39A02657F01788(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + E7ED61E0B00DDE0C_AE3A186DFD4FC306_A313240F72D08FF1_OFFSET))(F249A74E7BFBE1A7);
		}

		static ::System::Void F3E546EFACD54F09(::E7ED61E0B00DDE0C::AE3A186DFD4FC306_FE39A02657F01788 BB51ACFC0174A153)
		{
			return ((::System::Void(*)(::E7ED61E0B00DDE0C::AE3A186DFD4FC306_FE39A02657F01788))((::PBYTE)hIl2Cpp + E7ED61E0B00DDE0C_AE3A186DFD4FC306_F3E546EFACD54F09_OFFSET))(BB51ACFC0174A153);
		}
	};
}
