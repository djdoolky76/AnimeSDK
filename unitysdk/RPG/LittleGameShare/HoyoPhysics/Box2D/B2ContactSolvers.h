#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyStateW.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2FloatW.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2RotW.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2W.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2BodyState; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2StepContext; }
namespace System::Numerics { class Vector; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ADDW_1_OFFSET UNITYSDK_OFFSET(0x1C810AE0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ADDW_OFFSET UNITYSDK_OFFSET(0x1C80F6D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ALLZEROW_1_OFFSET UNITYSDK_OFFSET(0x1C810D50)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ALLZEROW_OFFSET UNITYSDK_OFFSET(0x1C810960)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2APPLYOVERFLOWRESTITUTION_OFFSET UNITYSDK_OFFSET(0x1C80E750)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2APPLYRESTITUTIONTASK_OFFSET UNITYSDK_OFFSET(0x1C816070)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2BLENDW_1_OFFSET UNITYSDK_OFFSET(0x1C810D90)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2BLENDW_OFFSET UNITYSDK_OFFSET(0x1C810710)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2CROSSW_OFFSET UNITYSDK_OFFSET(0x1C810E20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2DOTW_OFFSET UNITYSDK_OFFSET(0x1C810E00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2EQUALSW_1_OFFSET UNITYSDK_OFFSET(0x1C810D30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2EQUALSW_OFFSET UNITYSDK_OFFSET(0x1C810470)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2GATHERBODIES_OFFSET UNITYSDK_OFFSET(0x1C810E80)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2GETCONTACTCONSTRAINTSIMDBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1C810E70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2GREATERTHANW_1_OFFSET UNITYSDK_OFFSET(0x1C810D10)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2GREATERTHANW_OFFSET UNITYSDK_OFFSET(0x1C8101D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MAXW_1_OFFSET UNITYSDK_OFFSET(0x1C810BA0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MAXW_OFFSET UNITYSDK_OFFSET(0x1C80FB20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MINW_1_OFFSET UNITYSDK_OFFSET(0x1C810B80)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MINW_OFFSET UNITYSDK_OFFSET(0x1C80FA80)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULADDW_1_OFFSET UNITYSDK_OFFSET(0x1C810B40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULADDW_OFFSET UNITYSDK_OFFSET(0x1C80F8B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULSUBW_1_OFFSET UNITYSDK_OFFSET(0x1C810B60)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULSUBW_OFFSET UNITYSDK_OFFSET(0x1C80F990)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULW_1_OFFSET UNITYSDK_OFFSET(0x1C810B20)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULW_OFFSET UNITYSDK_OFFSET(0x1C80F810)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ORW_1_OFFSET UNITYSDK_OFFSET(0x1C810C60)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ORW_OFFSET UNITYSDK_OFFSET(0x1C80FD70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2PREPARECONTACTSTASK_OFFSET UNITYSDK_OFFSET(0x1C8115B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2PREPAREOVERFLOWCONTACTS_OFFSET UNITYSDK_OFFSET(0x1C80C5A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ROTATEVECTORW_OFFSET UNITYSDK_OFFSET(0x1C810E40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SCATTERBODIES_OFFSET UNITYSDK_OFFSET(0x1C811390)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SOLVECONTACTSTASK_OFFSET UNITYSDK_OFFSET(0x1C815110)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SOLVEOVERFLOWCONTACTS_OFFSET UNITYSDK_OFFSET(0x1C80D8A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SPLATW_OFFSET UNITYSDK_OFFSET(0x1C810AD0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2STOREIMPULSESTASK_OFFSET UNITYSDK_OFFSET(0x1C8168E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2STOREOVERFLOWIMPULSES_OFFSET UNITYSDK_OFFSET(0x1C80F020)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SUBW_1_OFFSET UNITYSDK_OFFSET(0x1C810B00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SUBW_OFFSET UNITYSDK_OFFSET(0x1C80F770)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SYMCLAMPW_1_OFFSET UNITYSDK_OFFSET(0x1C810BC0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SYMCLAMPW_OFFSET UNITYSDK_OFFSET(0x1C80FBC0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2WARMSTARTCONTACTSTASK_OFFSET UNITYSDK_OFFSET(0x1C814B30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2WARMSTARTOVERFLOWCONTACTS_OFFSET UNITYSDK_OFFSET(0x1C80D080)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ZEROW_OFFSET UNITYSDK_OFFSET(0x1C810AA0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	class B2ContactSolvers : public ::System::Object
	{
	public:
		static ::System::Void b2PrepareOverflowContacts(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2PREPAREOVERFLOWCONTACTS_OFFSET))(a1);
		}

		static ::System::Void b2WarmStartOverflowContacts(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2WARMSTARTOVERFLOWCONTACTS_OFFSET))(a1);
		}

		static ::System::Void b2SolveOverflowContacts(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SOLVEOVERFLOWCONTACTS_OFFSET))(a1, a2);
		}

		static ::System::Void b2ApplyOverflowRestitution(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2APPLYOVERFLOWRESTITUTION_OFFSET))(a1);
		}

		static ::System::Void b2StoreOverflowImpulses(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2STOREOVERFLOWIMPULSES_OFFSET))(a1);
		}

		static ::System::Numerics::Vector* b2AddW(::System::Numerics::Vector* a1, ::System::Numerics::Vector* a2)
		{
			return ((::System::Numerics::Vector*(*)(::System::Numerics::Vector*, ::System::Numerics::Vector*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ADDW_OFFSET))(a1, a2);
		}

		static ::System::Numerics::Vector* b2SubW(::System::Numerics::Vector* a1, ::System::Numerics::Vector* a2)
		{
			return ((::System::Numerics::Vector*(*)(::System::Numerics::Vector*, ::System::Numerics::Vector*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SUBW_OFFSET))(a1, a2);
		}

		static ::System::Numerics::Vector* b2MulW(::System::Numerics::Vector* a1, ::System::Numerics::Vector* a2)
		{
			return ((::System::Numerics::Vector*(*)(::System::Numerics::Vector*, ::System::Numerics::Vector*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULW_OFFSET))(a1, a2);
		}

		static ::System::Numerics::Vector* b2MulAddW(::System::Numerics::Vector* a1, ::System::Numerics::Vector* a2, ::System::Numerics::Vector* a3)
		{
			return ((::System::Numerics::Vector*(*)(::System::Numerics::Vector*, ::System::Numerics::Vector*, ::System::Numerics::Vector*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULADDW_OFFSET))(a1, a2, a3);
		}

		static ::System::Numerics::Vector* b2MulSubW(::System::Numerics::Vector* a1, ::System::Numerics::Vector* a2, ::System::Numerics::Vector* a3)
		{
			return ((::System::Numerics::Vector*(*)(::System::Numerics::Vector*, ::System::Numerics::Vector*, ::System::Numerics::Vector*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULSUBW_OFFSET))(a1, a2, a3);
		}

		static ::System::Numerics::Vector* b2MinW(::System::Numerics::Vector* a1, ::System::Numerics::Vector* a2)
		{
			return ((::System::Numerics::Vector*(*)(::System::Numerics::Vector*, ::System::Numerics::Vector*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MINW_OFFSET))(a1, a2);
		}

		static ::System::Numerics::Vector* b2MaxW(::System::Numerics::Vector* a1, ::System::Numerics::Vector* a2)
		{
			return ((::System::Numerics::Vector*(*)(::System::Numerics::Vector*, ::System::Numerics::Vector*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MAXW_OFFSET))(a1, a2);
		}

		static ::System::Numerics::Vector* b2SymClampW(::System::Numerics::Vector* a1, ::System::Numerics::Vector* a2)
		{
			return ((::System::Numerics::Vector*(*)(::System::Numerics::Vector*, ::System::Numerics::Vector*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SYMCLAMPW_OFFSET))(a1, a2);
		}

		static ::System::Numerics::Vector* b2OrW(::System::Numerics::Vector* a1, ::System::Numerics::Vector* a2)
		{
			return ((::System::Numerics::Vector*(*)(::System::Numerics::Vector*, ::System::Numerics::Vector*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ORW_OFFSET))(a1, a2);
		}

		static ::System::Numerics::Vector* b2GreaterThanW(::System::Numerics::Vector* a1, ::System::Numerics::Vector* a2)
		{
			return ((::System::Numerics::Vector*(*)(::System::Numerics::Vector*, ::System::Numerics::Vector*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2GREATERTHANW_OFFSET))(a1, a2);
		}

		static ::System::Numerics::Vector* b2EqualsW(::System::Numerics::Vector* a1, ::System::Numerics::Vector* a2)
		{
			return ((::System::Numerics::Vector*(*)(::System::Numerics::Vector*, ::System::Numerics::Vector*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2EQUALSW_OFFSET))(a1, a2);
		}

		static ::System::Numerics::Vector* b2BlendW(::System::Numerics::Vector* a1, ::System::Numerics::Vector* a2, ::System::Numerics::Vector* a3)
		{
			return ((::System::Numerics::Vector*(*)(::System::Numerics::Vector*, ::System::Numerics::Vector*, ::System::Numerics::Vector*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2BLENDW_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean b2AllZeroW(::System::Numerics::Vector* a1)
		{
			return ((::System::Boolean(*)(::System::Numerics::Vector*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ALLZEROW_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2ZeroW()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ZEROW_OFFSET))();
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2SplatW(::System::Single a1)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SPLATW_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2AddW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ADDW_1_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2SubW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SUBW_1_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2MulW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULW_1_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2MulAddW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULADDW_1_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2MulSubW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MULSUBW_1_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2MinW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MINW_1_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2MaxW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2MAXW_1_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2SymClampW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SYMCLAMPW_1_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2OrW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ORW_1_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2GreaterThanW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2GREATERTHANW_1_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2EqualsW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2EQUALSW_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2AllZeroW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ALLZEROW_1_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2BlendW_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW a3)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2BLENDW_1_OFFSET))(a1, a2, a3);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2DotW(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2DOTW_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW b2CrossW(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2FloatW(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2CROSSW_OFFSET))(a1, a2);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W b2RotateVectorW(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RotW a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RotW, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2W))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2ROTATEVECTORW_OFFSET))(a1, a2);
		}

		static ::System::Int32 b2GetContactConstraintSIMDByteCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2GETCONTACTCONSTRAINTSIMDBYTECOUNT_OFFSET))();
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyStateW b2GatherBodies(::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyState*>* a1, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Int32> a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyStateW(*)(::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyState*>*, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Int32>))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2GATHERBODIES_OFFSET))(a1, a2);
		}

		static ::System::Void b2ScatterBodies(::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyState*>* a1, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Int32> a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyStateW a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyState*>*, ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Int32>, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyStateW))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SCATTERBODIES_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2PrepareContactsTask(::System::Int32 a1, ::System::Int32 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2PREPARECONTACTSTASK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2WarmStartContactsTask(::System::Int32 a1, ::System::Int32 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2WARMSTARTCONTACTSTASK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void b2SolveContactsTask(::System::Int32 a1, ::System::Int32 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2SOLVECONTACTSTASK_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void b2ApplyRestitutionTask(::System::Int32 a1, ::System::Int32 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2APPLYRESTITUTIONTASK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void b2StoreImpulsesTask(::System::Int32 a1, ::System::Int32 a2, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CONTACTSOLVERS_B2STOREIMPULSESTASK_OFFSET))(a1, a2, a3);
		}

	};
}
