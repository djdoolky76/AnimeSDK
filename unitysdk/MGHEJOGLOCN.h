#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class ServantRowData; }
namespace System { class String; }

#define MGHEJOGLOCN_BOEILPIJLJJ_1_OFFSET UNITYSDK_OFFSET(0xB917470)
#define MGHEJOGLOCN_BOEILPIJLJJ_2_OFFSET UNITYSDK_OFFSET(0xB9179D0)
#define MGHEJOGLOCN_BOEILPIJLJJ_3_OFFSET UNITYSDK_OFFSET(0xB917B70)
#define MGHEJOGLOCN_BOEILPIJLJJ_OFFSET UNITYSDK_OFFSET(0xB917030)
#define MGHEJOGLOCN_CCTOR_OFFSET UNITYSDK_OFFSET(0xB917CE0)
#define MGHEJOGLOCN_CTOR_OFFSET UNITYSDK_OFFSET(0xB917CD0)
#define MGHEJOGLOCN_NLFGNGMEMGF_OFFSET UNITYSDK_OFFSET(0xB9171C0)
#define MGHEJOGLOCN_PFAHDIJMFNG_OFFSET UNITYSDK_OFFSET(0xB9178C0)

inline static constexpr unsigned int MGHEJOGLOCN_TypeDefinitionIndex = 59064;

	class MGHEJOGLOCN : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::GameCore::AbilityProperty>** StaticGet_PGPNFONAIBC()
		{
			return (::Il2CppArray<::RPG::GameCore::AbilityProperty>**)UnitySDK::FromName("", "MGHEJOGLOCN")->GetStaticField(0x5C2D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHEJOGLOCN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGHEJOGLOCN_CCTOR_OFFSET))();
		}

		static ::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint> BOEILPIJLJJ(::System::String* a1, ::System::String* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3)
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>(*)(::System::String*, ::System::String*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + MGHEJOGLOCN_BOEILPIJLJJ_OFFSET))(a1, a2, a3);
		}

		static ::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint> BOEILPIJLJJ_1(::System::String* a1, ::System::String* a2, ::System::UInt32 a3, ::RPG::GameCore::ServantRowData* a4)
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>(*)(::System::String*, ::System::String*, ::System::UInt32, ::RPG::GameCore::ServantRowData*))((::PBYTE)hIl2Cpp + MGHEJOGLOCN_BOEILPIJLJJ_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint> BOEILPIJLJJ_2(::System::String* a1, ::System::String* a2, ::System::UInt32 a3, ::RPG::AvatarSystem::IAvatar* a4)
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>(*)(::System::String*, ::System::String*, ::System::UInt32, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + MGHEJOGLOCN_BOEILPIJLJJ_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint> BOEILPIJLJJ_3(::System::String* a1, ::System::String* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>(*)(::System::String*, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MGHEJOGLOCN_BOEILPIJLJJ_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt32 PFAHDIJMFNG(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MGHEJOGLOCN_PFAHDIJMFNG_OFFSET))(a1, a2);
		}

		static ::System::Void NLFGNGMEMGF(::System::String* a1, ::System::Int32 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + MGHEJOGLOCN_NLFGNGMEMGF_OFFSET))(a1, a2, a3);
		}

	};
