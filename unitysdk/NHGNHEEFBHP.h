#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NHGNHEEFBHP_CTOR_OFFSET UNITYSDK_OFFSET(0xBBC4E20)
#define NHGNHEEFBHP_EFJGMADCEFA_OFFSET UNITYSDK_OFFSET(0xBBC4CF0)
#define NHGNHEEFBHP_HKCPGPNDOKI_OFFSET UNITYSDK_OFFSET(0xBBC39B0)
#define NHGNHEEFBHP_JEAOGAEJCGA_OFFSET UNITYSDK_OFFSET(0xBBC43A0)
#define NHGNHEEFBHP_LEMEKFPJJFL_OFFSET UNITYSDK_OFFSET(0xBBC2560)
#define NHGNHEEFBHP_MFBGJOPDKPE_1_OFFSET UNITYSDK_OFFSET(0xBBC4130)
#define NHGNHEEFBHP_MFBGJOPDKPE_OFFSET UNITYSDK_OFFSET(0xBBC3940)
#define NHGNHEEFBHP_NIDANNJMJII_OFFSET UNITYSDK_OFFSET(0xBBC3BA0)

	class NHGNHEEFBHP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGNHEEFBHP_CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::FixVec2 LEMEKFPJJFL(::RPG::GameCore::FixPoint a1, ::System::Collections::Generic::List_1<::RPG::GameCore::FixVec2>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::FixVec2>* a3)
		{
			return ((::RPG::GameCore::FixVec2(*)(::RPG::GameCore::FixPoint, ::System::Collections::Generic::List_1<::RPG::GameCore::FixVec2>*, ::System::Collections::Generic::List_1<::RPG::GameCore::FixVec2>*))((::PBYTE)hIl2Cpp + NHGNHEEFBHP_LEMEKFPJJFL_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixVec2 MFBGJOPDKPE(::System::Collections::Generic::List_1<::RPG::GameCore::FixVec2>* a1)
		{
			return ((::RPG::GameCore::FixVec2(*)(::System::Collections::Generic::List_1<::RPG::GameCore::FixVec2>*))((::PBYTE)hIl2Cpp + NHGNHEEFBHP_MFBGJOPDKPE_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixVec2 MFBGJOPDKPE_1(::System::Collections::Generic::IList_1<::RPG::GameCore::FixVec2>* a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::FixVec2(*)(::System::Collections::Generic::IList_1<::RPG::GameCore::FixVec2>*, ::System::Int32))((::PBYTE)hIl2Cpp + NHGNHEEFBHP_MFBGJOPDKPE_1_OFFSET))(a1, a2);
		}

		static ::System::Void NIDANNJMJII(::Il2CppArray<::RPG::GameCore::FixVec2>* a1, ::System::Int32 a2, ::Il2CppArray<::RPG::GameCore::FixVec2>* a3, ::System::Int32 a4, ::RPG::GameCore::FixVec2 a5, ::RPG::GameCore::FixPoint a6)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::FixVec2>*, ::System::Int32, ::Il2CppArray<::RPG::GameCore::FixVec2>*, ::System::Int32, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + NHGNHEEFBHP_NIDANNJMJII_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void JEAOGAEJCGA(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2, ::RPG::GameCore::FixVec2 a3, ::RPG::GameCore::FixVec2 a4, ::RPG::GameCore::FixPoint a5)
		{
			return ((::System::Void(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + NHGNHEEFBHP_JEAOGAEJCGA_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean EFJGMADCEFA(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + NHGNHEEFBHP_EFJGMADCEFA_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HKCPGPNDOKI(::System::Collections::Generic::List_1<::RPG::GameCore::FixVec2>* a1, ::RPG::GameCore::FixVec2 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::GameCore::FixVec2>*, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + NHGNHEEFBHP_HKCPGPNDOKI_OFFSET))(a1, a2, a3);
		}

	};
