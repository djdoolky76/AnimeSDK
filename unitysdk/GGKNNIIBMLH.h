#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/RPG/Client/TAUtils/QuaternionTransform.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define GGKNNIIBMLH_BLLAOBFKKNF_OFFSET UNITYSDK_OFFSET(0x15A03250)
#define GGKNNIIBMLH_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A03830)
#define GGKNNIIBMLH_CDMDLMFBFHG_OFFSET UNITYSDK_OFFSET(0x15A02B10)
#define GGKNNIIBMLH_GPIDPKOBNIJ_OFFSET UNITYSDK_OFFSET(0x15A02000)
#define GGKNNIIBMLH_HOOHAIAMHGM_OFFSET UNITYSDK_OFFSET(0x15A02240)
#define GGKNNIIBMLH_LHAEJNAMEHA_OFFSET UNITYSDK_OFFSET(0x15A020E0)
#define GGKNNIIBMLH_LHDAJIHMDMF_OFFSET UNITYSDK_OFFSET(0x15A026F0)
#define GGKNNIIBMLH_LLAMGDJNFKH_OFFSET UNITYSDK_OFFSET(0x15A02060)
#define GGKNNIIBMLH_NCBFNCPFNKD_OFFSET UNITYSDK_OFFSET(0x15A02160)
#define GGKNNIIBMLH_PEAHFADCIKA_OFFSET UNITYSDK_OFFSET(0x15A021D0)

inline static constexpr unsigned int GGKNNIIBMLH_TypeDefinitionIndex = 73653;

	class GGKNNIIBMLH : public ::System::Object
	{
	public:
		static ::UnityEngine::Bounds* StaticGet_CGCCHDJDKLN()
		{
			return (::UnityEngine::Bounds*)UnitySDK::FromName("", "GGKNNIIBMLH")->GetStaticField(0x6400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGKNNIIBMLH_CCTOR_OFFSET))();
		}

		static ::System::Void GPIDPKOBNIJ(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + GGKNNIIBMLH_GPIDPKOBNIJ_OFFSET))(a1);
		}

		static ::System::Void LLAMGDJNFKH(::UnityEngine::Material* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + GGKNNIIBMLH_LLAMGDJNFKH_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector4 LHAEJNAMEHA(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + GGKNNIIBMLH_LHAEJNAMEHA_OFFSET))(a1);
		}

		static ::UnityEngine::Vector4 NCBFNCPFNKD(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + GGKNNIIBMLH_NCBFNCPFNKD_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion PEAHFADCIKA(::UnityEngine::Vector4 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + GGKNNIIBMLH_PEAHFADCIKA_OFFSET))(a1);
		}

		static ::RPG::Client::TAUtils::SimpleTransform HOOHAIAMHGM(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::TAUtils::SimpleTransform(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + GGKNNIIBMLH_HOOHAIAMHGM_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::TAUtils::QuaternionTransform LHDAJIHMDMF(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::TAUtils::QuaternionTransform(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + GGKNNIIBMLH_LHDAJIHMDMF_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Bounds CDMDLMFBFHG(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::UnityEngine::Bounds(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + GGKNNIIBMLH_CDMDLMFBFHG_OFFSET))(a1);
		}

		static ::System::Void BLLAOBFKKNF(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Renderer*>* a1, ::System::Boolean a2, ::UnityEngine::Bounds a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Renderer*>*, ::System::Boolean, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + GGKNNIIBMLH_BLLAOBFKKNF_OFFSET))(a1, a2, a3);
		}

	};
