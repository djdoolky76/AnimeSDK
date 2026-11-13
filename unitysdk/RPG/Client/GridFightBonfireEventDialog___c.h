#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonfireEventDialogSentence; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D57D7D0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57D810)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOG___C__CREATE_B__5_0_OFFSET UNITYSDK_OFFSET(0x1D57D820)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonfireEventDialog___c_TypeDefinitionIndex = 65869;

	class GridFightBonfireEventDialog___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6FF20);
		}

		static ::System::Comparison_1<::RPG::Client::GridFightBonfireEventDialogSentence*>** StaticGet___9__5_0()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightBonfireEventDialogSentence*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6FF28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOG___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _Create_b__5_0(::RPG::Client::GridFightBonfireEventDialogSentence* a1, ::RPG::Client::GridFightBonfireEventDialogSentence* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightBonfireEventDialogSentence*, ::RPG::Client::GridFightBonfireEventDialogSentence*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOG___C__CREATE_B__5_0_OFFSET))(this, a1, a2);
		}

	};
}
