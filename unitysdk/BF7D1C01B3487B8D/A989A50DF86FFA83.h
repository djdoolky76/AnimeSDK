#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::U2D { class SpriteAtlas; }

#define BF7D1C01B3487B8D_A989A50DF86FFA83_A1ABFD9530BE636D_OFFSET UNITYSDK_OFFSET(0x411E800)
#define BF7D1C01B3487B8D_A989A50DF86FFA83_B77D109286928E72_OFFSET UNITYSDK_OFFSET(0x411EA30)
#define BF7D1C01B3487B8D_A989A50DF86FFA83_E6ECF0BDB88AA557_OFFSET UNITYSDK_OFFSET(0x411E8A0)
#define BF7D1C01B3487B8D_A989A50DF86FFA83_EC2726EA4B5971F2_OFFSET UNITYSDK_OFFSET(0x411E950)
#define BF7D1C01B3487B8D_A989A50DF86FFA83_F7D068BC7F8ED55F_OFFSET UNITYSDK_OFFSET(0x411E860)

namespace BF7D1C01B3487B8D
{
	inline static constexpr unsigned int A989A50DF86FFA83_TypeDefinitionIndex = 17063;

	class A989A50DF86FFA83 : public ::System::Object
	{
	public:
		static ::System::Action_2<::System::String*, ::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>*>** StaticGet_B0A967C046D1CC14()
		{
			return (::System::Action_2<::System::String*, ::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>*>**)Il2CppClass::FromTypeDefinitionIndex(A989A50DF86FFA83_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>** StaticGet_A3BF1339976CDF7F()
		{
			return (::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>**)Il2CppClass::FromTypeDefinitionIndex(A989A50DF86FFA83_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void A1ABFD9530BE636D(::UnityEngine::U2D::SpriteAtlas* F0E78BD8B94D1F4C)
		{
			return ((::System::Void(*)(::UnityEngine::U2D::SpriteAtlas*))((::PBYTE)hIl2Cpp + BF7D1C01B3487B8D_A989A50DF86FFA83_A1ABFD9530BE636D_OFFSET))(F0E78BD8B94D1F4C);
		}

		static ::System::Boolean E6ECF0BDB88AA557(::System::String* AE57FF5179B75168)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + BF7D1C01B3487B8D_A989A50DF86FFA83_E6ECF0BDB88AA557_OFFSET))(AE57FF5179B75168);
		}

		static ::System::Void F7D068BC7F8ED55F(::UnityEngine::U2D::SpriteAtlas* F0E78BD8B94D1F4C)
		{
			return ((::System::Void(*)(::UnityEngine::U2D::SpriteAtlas*))((::PBYTE)hIl2Cpp + BF7D1C01B3487B8D_A989A50DF86FFA83_F7D068BC7F8ED55F_OFFSET))(F0E78BD8B94D1F4C);
		}

		static ::System::Void B77D109286928E72(::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>*))((::PBYTE)hIl2Cpp + BF7D1C01B3487B8D_A989A50DF86FFA83_B77D109286928E72_OFFSET))(E937D4885DAA1AE8);
		}

		static ::System::Void EC2726EA4B5971F2(::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::U2D::SpriteAtlas*>*))((::PBYTE)hIl2Cpp + BF7D1C01B3487B8D_A989A50DF86FFA83_EC2726EA4B5971F2_OFFSET))(E937D4885DAA1AE8);
		}
	};
}
