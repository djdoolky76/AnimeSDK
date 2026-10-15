#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class FloatCurveKeyframe; }

#define HGKPEDNNAGL_FICNLFFLNOE_OFFSET UNITYSDK_OFFSET(0x1CEA7BA0)
#define HGKPEDNNAGL_HAIHHFOPBLN_OFFSET UNITYSDK_OFFSET(0x1CEA7CB0)
#define HGKPEDNNAGL_HDOFEPFEOEB_OFFSET UNITYSDK_OFFSET(0x1CEA7CC0)
#define HGKPEDNNAGL_IOLBAHFDFCH_OFFSET UNITYSDK_OFFSET(0x1CEA7D30)
#define HGKPEDNNAGL_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1CEA76E0)
#define HGKPEDNNAGL_LBDMMLDLFLD_OFFSET UNITYSDK_OFFSET(0x1CEA7930)
#define HGKPEDNNAGL_LHAAHDBLEMG_OFFSET UNITYSDK_OFFSET(0x1CEA7D70)
#define HGKPEDNNAGL_MLKOLOKHIKO_OFFSET UNITYSDK_OFFSET(0x1CEA7DD0)
#define HGKPEDNNAGL_ODOIAFEBMLN_OFFSET UNITYSDK_OFFSET(0x1CEA7B20)

inline static constexpr unsigned int HGKPEDNNAGL_TypeDefinitionIndex = 24845;

	class HGKPEDNNAGL : public ::System::Object
	{
	public:
		static ::System::Single KFGJEKJHIMB(::RPG::GameCore::FloatCurve* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::RPG::GameCore::FloatCurve*, ::System::Single))((::PBYTE)hIl2Cpp + HGKPEDNNAGL_KFGJEKJHIMB_OFFSET))(a1, a2);
		}

		static ::System::Single LBDMMLDLFLD(::RPG::GameCore::FloatCurve* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::RPG::GameCore::FloatCurve*, ::System::Single))((::PBYTE)hIl2Cpp + HGKPEDNNAGL_LBDMMLDLFLD_OFFSET))(a1, a2);
		}

		static ::System::Int32 ODOIAFEBMLN(::Il2CppArray<::RPG::GameCore::FloatCurveKeyframe*>* a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::RPG::GameCore::FloatCurveKeyframe*>*, ::System::Single))((::PBYTE)hIl2Cpp + HGKPEDNNAGL_ODOIAFEBMLN_OFFSET))(a1, a2);
		}

		static ::System::Single FICNLFFLNOE(::RPG::GameCore::FloatCurveKeyframe* a1, ::RPG::GameCore::FloatCurveKeyframe* a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::RPG::GameCore::FloatCurveKeyframe*, ::RPG::GameCore::FloatCurveKeyframe*, ::System::Single))((::PBYTE)hIl2Cpp + HGKPEDNNAGL_FICNLFFLNOE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single HAIHHFOPBLN(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HGKPEDNNAGL_HAIHHFOPBLN_OFFSET))(a1, a2, a3);
		}

		static ::System::Single HDOFEPFEOEB(::RPG::GameCore::FloatCurve* a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::FloatCurve*))((::PBYTE)hIl2Cpp + HGKPEDNNAGL_HDOFEPFEOEB_OFFSET))(a1);
		}

		static ::System::Single IOLBAHFDFCH(::RPG::GameCore::FloatCurve* a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::FloatCurve*))((::PBYTE)hIl2Cpp + HGKPEDNNAGL_IOLBAHFDFCH_OFFSET))(a1);
		}

		static ::System::Single LHAAHDBLEMG(::RPG::GameCore::FloatCurve* a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::FloatCurve*))((::PBYTE)hIl2Cpp + HGKPEDNNAGL_LHAAHDBLEMG_OFFSET))(a1);
		}

		static ::System::Boolean MLKOLOKHIKO(::RPG::GameCore::FloatCurve* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FloatCurve*, ::System::Single))((::PBYTE)hIl2Cpp + HGKPEDNNAGL_MLKOLOKHIKO_OFFSET))(a1, a2);
		}

	};
