#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJHHFMBOCEN.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AGCPAMNLCGN;
class GHLMCHNDPHI;
class JBACCAGFHON;
namespace Entitas { template <typename T> class IMatcher_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define GHLMCHNDPHI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15A286E0)
#define GHLMCHNDPHI_CKBINNGEHAI_OFFSET UNITYSDK_OFFSET(0x15A28790)
#define GHLMCHNDPHI_CTOR_OFFSET UNITYSDK_OFFSET(0x15A29780)
#define GHLMCHNDPHI_EPEOGOEDKPB_OFFSET UNITYSDK_OFFSET(0x15A28E60)
#define GHLMCHNDPHI_FILGJJIBCPJ_OFFSET UNITYSDK_OFFSET(0x15A290C0)
#define GHLMCHNDPHI_GMLKMFDNNFP_OFFSET UNITYSDK_OFFSET(0x15A29480)
#define GHLMCHNDPHI_LLNOMNFBGCA_OFFSET UNITYSDK_OFFSET(0x15A28670)
#define GHLMCHNDPHI_MPPKNALDANL_OFFSET UNITYSDK_OFFSET(0x15A29380)
#define GHLMCHNDPHI_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x15A29700)
#define GHLMCHNDPHI_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15A289D0)
#define GHLMCHNDPHI_OPBICJODOII_OFFSET UNITYSDK_OFFSET(0x15A28DE0)
#define GHLMCHNDPHI__ONEXECUTE_B__12_0_OFFSET UNITYSDK_OFFSET(0x15A29790)
#define GHLMCHNDPHI___GETSTATICCELLLOOKATPOSITION_B__16_0_OFFSET UNITYSDK_OFFSET(0x15A29800)

inline static constexpr unsigned int GHLMCHNDPHI_TypeDefinitionIndex = 78175;

	class GHLMCHNDPHI : public ::AJHHFMBOCEN
	{
	public:
		::JBACCAGFHON* PDENFEFCAGN; // 0x20
		::Entitas::IMatcher_1<::AGCPAMNLCGN*>* FEOKINDNFOP; // 0x28
		::System::String* NNIOCPHFNNG; // 0x30
		::System::UInt32 MFECFKKKNEJ; // 0x38
		// static const ::System::Object OPHPALHFBKL; // 0x0
		// static const ::System::Object JIMAOEIPHMN; // 0x0
		// static const ::System::Object MKFKGOPLHEC; // 0x0
		// static const ::System::Object JAECOOJJFOO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLMCHNDPHI_CTOR_OFFSET))(this);
		}

		::System::UInt32 LLNOMNFBGCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLMCHNDPHI_LLNOMNFBGCA_OFFSET))(this);
		}

		static ::GHLMCHNDPHI* BPLPBPMEODA(::JBACCAGFHON* a1, ::System::UInt32 a2)
		{
			return ((::GHLMCHNDPHI*(*)(::JBACCAGFHON*, ::System::UInt32))((::PBYTE)hIl2Cpp + GHLMCHNDPHI_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		static ::System::ValueTuple_2<::System::String*, ::Entitas::IMatcher_1<::AGCPAMNLCGN*>*> CKBINNGEHAI(::System::UInt32 a1)
		{
			return ((::System::ValueTuple_2<::System::String*, ::Entitas::IMatcher_1<::AGCPAMNLCGN*>*>(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GHLMCHNDPHI_CKBINNGEHAI_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLMCHNDPHI_ONEXECUTE_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 EPEOGOEDKPB(::JBACCAGFHON* a1, ::System::Func_3<::System::UInt32, ::System::UInt32, ::System::Int32>* a2)
		{
			return ((::UnityEngine::Vector3(*)(::JBACCAGFHON*, ::System::Func_3<::System::UInt32, ::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + GHLMCHNDPHI_EPEOGOEDKPB_OFFSET))(a1, a2);
		}

		::UnityEngine::Vector3 OPBICJODOII()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLMCHNDPHI_OPBICJODOII_OFFSET))(this);
		}

		::UnityEngine::Vector3 FILGJJIBCPJ()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLMCHNDPHI_FILGJJIBCPJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 MPPKNALDANL()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLMCHNDPHI_MPPKNALDANL_OFFSET))(this);
		}

		::System::Void GMLKMFDNNFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLMCHNDPHI_GMLKMFDNNFP_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLMCHNDPHI_ONCLEAR_OFFSET))(this);
		}

		::System::Void _OnExecute_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLMCHNDPHI__ONEXECUTE_B__12_0_OFFSET))(this);
		}

		::System::Int32 __GetStaticCellLookAtPosition_b__16_0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GHLMCHNDPHI___GETSTATICCELLLOOKATPOSITION_B__16_0_OFFSET))(this, a1, a2);
		}

	};
