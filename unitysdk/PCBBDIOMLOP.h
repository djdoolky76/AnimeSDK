#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FKDIDBGBGMF.h"
#include "unitysdk/RPGTools/Octree/Generation/OctreeNodeNativeData.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
namespace RPGTools::Octree::Generation { class OctreeData; }
namespace RPGTools::Octree::Generation { class OctreeNodeData; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define PCBBDIOMLOP_BCHOMFBMDGH_OFFSET UNITYSDK_OFFSET(0xBFFBB80)
#define PCBBDIOMLOP_CCTOR_OFFSET UNITYSDK_OFFSET(0xBFFC8F0)
#define PCBBDIOMLOP_DEMOCDKEOGO_OFFSET UNITYSDK_OFFSET(0xBFFC1C0)
#define PCBBDIOMLOP_DFGCAOKHECL_OFFSET UNITYSDK_OFFSET(0xBFFBAC0)
#define PCBBDIOMLOP_EHJNBBJCJBA_OFFSET UNITYSDK_OFFSET(0xBFFC040)
#define PCBBDIOMLOP_FKGIMDPFAPF_OFFSET UNITYSDK_OFFSET(0xBFFC510)
#define PCBBDIOMLOP_GKHOFMHGHCB_OFFSET UNITYSDK_OFFSET(0xBFFAF30)
#define PCBBDIOMLOP_HCAENNPAMDA_OFFSET UNITYSDK_OFFSET(0xBFFC420)
#define PCBBDIOMLOP_HEPELILOKDJ_OFFSET UNITYSDK_OFFSET(0xBFFB100)
#define PCBBDIOMLOP_ILJGPAIPIDG_OFFSET UNITYSDK_OFFSET(0xBFFB5B0)
#define PCBBDIOMLOP_JKPHNDLOGJF_OFFSET UNITYSDK_OFFSET(0xBFFC0D0)
#define PCBBDIOMLOP_MJLLHMGLOHL_OFFSET UNITYSDK_OFFSET(0xBFFB910)
#define PCBBDIOMLOP_NLLGMPFCNAL_OFFSET UNITYSDK_OFFSET(0xBFFB730)
#define PCBBDIOMLOP_OGGCBJKOJIK_OFFSET UNITYSDK_OFFSET(0xBFFC7B0)
#define PCBBDIOMLOP_OHOCOHKIEJF_1_OFFSET UNITYSDK_OFFSET(0xBFFC5C0)
#define PCBBDIOMLOP_OHOCOHKIEJF_OFFSET UNITYSDK_OFFSET(0xBFFB830)

	class PCBBDIOMLOP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_MCNHCAPBMDG()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)UnitySDK::FromName("", "PCBBDIOMLOP")->GetStaticField(0x645C0);
		}

		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_IPFJOLOOAGF()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)UnitySDK::FromName("", "PCBBDIOMLOP")->GetStaticField(0x645C8);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_BPIPGCNHLKO()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("", "PCBBDIOMLOP")->GetStaticField(0x645D0);
		}

		// static const ::System::Object KKHEHPGODNF; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCBBDIOMLOP_CCTOR_OFFSET))();
		}

		static ::RPGTools::Octree::Generation::OctreeData* GKHOFMHGHCB(::System::String* a1, ::UnityEngine::Transform* a2, ::System::Single a3, ::System::Int32 a4, ::UnityEngine::LayerMask a5)
		{
			return ((::RPGTools::Octree::Generation::OctreeData*(*)(::System::String*, ::UnityEngine::Transform*, ::System::Single, ::System::Int32, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + PCBBDIOMLOP_GKHOFMHGHCB_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void HEPELILOKDJ(::UnityEngine::Transform* a1, ::RPGTools::Octree::Generation::OctreeNodeData* a2, ::System::Int32 a3, ::UnityEngine::LayerMask a4)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::RPGTools::Octree::Generation::OctreeNodeData*, ::System::Int32, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + PCBBDIOMLOP_HEPELILOKDJ_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ILJGPAIPIDG(::RPGTools::Octree::Generation::OctreeNodeData* a1)
		{
			return ((::System::Void(*)(::RPGTools::Octree::Generation::OctreeNodeData*))((::PBYTE)hIl2Cpp + PCBBDIOMLOP_ILJGPAIPIDG_OFFSET))(a1);
		}

		static ::System::Boolean MJLLHMGLOHL(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::UnityEngine::LayerMask a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + PCBBDIOMLOP_MJLLHMGLOHL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 NLLGMPFCNAL(::RPGTools::Octree::Generation::OctreeNodeData* a1)
		{
			return ((::System::Int32(*)(::RPGTools::Octree::Generation::OctreeNodeData*))((::PBYTE)hIl2Cpp + PCBBDIOMLOP_NLLGMPFCNAL_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 BCHOMFBMDGH(::FKDIDBGBGMF a1, ::FKDIDBGBGMF a2)
		{
			return ((::UnityEngine::Vector3(*)(::FKDIDBGBGMF, ::FKDIDBGBGMF))((::PBYTE)hIl2Cpp + PCBBDIOMLOP_BCHOMFBMDGH_OFFSET))(a1, a2);
		}

		static ::System::Int32 EHJNBBJCJBA(::FKDIDBGBGMF a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Int32(*)(::FKDIDBGBGMF, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PCBBDIOMLOP_EHJNBBJCJBA_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 DFGCAOKHECL(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::System::Int32))((::PBYTE)hIl2Cpp + PCBBDIOMLOP_DFGCAOKHECL_OFFSET))(a1);
		}

		static ::System::Single JKPHNDLOGJF(::FKDIDBGBGMF a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::FKDIDBGBGMF, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PCBBDIOMLOP_JKPHNDLOGJF_OFFSET))(a1, a2);
		}

		static ::System::Int32 DEMOCDKEOGO(::FKDIDBGBGMF a1, ::FKDIDBGBGMF a2)
		{
			return ((::System::Int32(*)(::FKDIDBGBGMF, ::FKDIDBGBGMF))((::PBYTE)hIl2Cpp + PCBBDIOMLOP_DEMOCDKEOGO_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 HCAENNPAMDA(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::System::Int32))((::PBYTE)hIl2Cpp + PCBBDIOMLOP_HCAENNPAMDA_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Int32>* FKGIMDPFAPF(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + PCBBDIOMLOP_FKGIMDPFAPF_OFFSET))(a1);
		}

		static ::System::String* OHOCOHKIEJF(::System::String* a1, ::RPGTools::Octree::Generation::OctreeNodeData* a2)
		{
			return ((::System::String*(*)(::System::String*, ::RPGTools::Octree::Generation::OctreeNodeData*))((::PBYTE)hIl2Cpp + PCBBDIOMLOP_OHOCOHKIEJF_OFFSET))(a1, a2);
		}

		static ::System::Int32 OHOCOHKIEJF_1(::Il2CppArray<::RPGTools::Octree::Generation::OctreeNodeNativeData>* a1, ::System::Int32 a2, ::System::Int32 a3, ::RPGTools::Octree::Generation::OctreeNodeData* a4)
		{
			return ((::System::Int32(*)(::Il2CppArray<::RPGTools::Octree::Generation::OctreeNodeNativeData>*, ::System::Int32, ::System::Int32, ::RPGTools::Octree::Generation::OctreeNodeData*))((::PBYTE)hIl2Cpp + PCBBDIOMLOP_OHOCOHKIEJF_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void OGGCBJKOJIK(::UnityEngine::Transform* a1, ::FKDIDBGBGMF a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::FKDIDBGBGMF))((::PBYTE)hIl2Cpp + PCBBDIOMLOP_OGGCBJKOJIK_OFFSET))(a1, a2);
		}

	};
