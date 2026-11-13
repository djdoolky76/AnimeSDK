#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CHMKGPJJDEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x16E2DBB0)
#define CHMKGPJJDEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x16E2DBF0)
#define CHMKGPJJDEE___C___FINDBOARDROLEBYID_B__5_0_OFFSET UNITYSDK_OFFSET(0x16E2DC00)

inline static constexpr unsigned int CHMKGPJJDEE___c_TypeDefinitionIndex = 66895;

	class CHMKGPJJDEE___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17250);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17258);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHMKGPJJDEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMKGPJJDEE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __FindBoardRoleByID_b__5_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CHMKGPJJDEE___C___FINDBOARDROLEBYID_B__5_0_OFFSET))(this, a1);
		}

	};
