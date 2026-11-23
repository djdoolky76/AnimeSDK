#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ACF10FE87B4C5617.h"
#include "unitysdk/UnityEngine/BE5668376C82998A.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
template <typename T> class AE67837A03FEA882;

#define F2792F2598627091_B0C9480D10074E9D_BC5FC01AE53FF41F_OFFSET UNITYSDK_OFFSET(0x42B8180)
#define F2792F2598627091_B0C9480D10074E9D__CCTOR_OFFSET UNITYSDK_OFFSET(0x42B8340)
#define F2792F2598627091_B0C9480D10074E9D__CTOR_OFFSET UNITYSDK_OFFSET(0x42B83A0)

namespace F2792F2598627091
{
	inline static constexpr unsigned int B0C9480D10074E9D_TypeDefinitionIndex = 14100;

	class B0C9480D10074E9D : public ::System::Object
	{
	public:
		static ::UnityEngine::BE5668376C82998A* StaticGet_BF618D94D7C503E4()
		{
			return (::UnityEngine::BE5668376C82998A*)Il2CppClass::FromTypeDefinitionIndex(B0C9480D10074E9D_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::UnityEngine::BE5668376C82998A* StaticGet_BD8FDAC11D22FEF9()
		{
			return (::UnityEngine::BE5668376C82998A*)Il2CppClass::FromTypeDefinitionIndex(B0C9480D10074E9D_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		::AE67837A03FEA882<::UnityEngine::ACF10FE87B4C5617>* E8B7D3E7F05C5C1E; // 0x10
		::AE67837A03FEA882<::UnityEngine::BE5668376C82998A>* F71DCD2D676AE081; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>* AE2EABF3B181DE28; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* A54CAE7946672F73; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F2792F2598627091_B0C9480D10074E9D__CTOR_OFFSET))(this);
		}

		::System::Void BC5FC01AE53FF41F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F2792F2598627091_B0C9480D10074E9D_BC5FC01AE53FF41F_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F2792F2598627091_B0C9480D10074E9D__CCTOR_OFFSET))();
		}
	};
}
