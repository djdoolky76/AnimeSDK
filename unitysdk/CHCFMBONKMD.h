#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CHCFMBONKMD_CCTOR_OFFSET UNITYSDK_OFFSET(0xCC8CAD0)
#define CHCFMBONKMD_IJJAJACCGCD_OFFSET UNITYSDK_OFFSET(0xCC8C8C0)

inline static constexpr unsigned int CHCFMBONKMD_TypeDefinitionIndex = 49619;

	class CHCFMBONKMD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_HDAGADJGEKF()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)UnitySDK::FromName("", "CHCFMBONKMD")->GetStaticField(0x250C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHCFMBONKMD_CCTOR_OFFSET))();
		}

		static ::System::Void IJJAJACCGCD(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CHCFMBONKMD_IJJAJACCGCD_OFFSET))(a1, a2, a3);
		}

	};
