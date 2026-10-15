#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FALOGMPHKKH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15684150)
#define FALOGMPHKKH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15684190)
#define FALOGMPHKKH___C__GET_ISVALID_B__5_0_OFFSET UNITYSDK_OFFSET(0x156841A0)
#define FALOGMPHKKH___C__GET_ISVALID_B__5_1_OFFSET UNITYSDK_OFFSET(0x15684260)

	class FALOGMPHKKH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C990);
		}

		static ::System::Func_2<::RPG::Client::GridFightProjection*, ::System::Boolean>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightProjection*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C998);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C9A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FALOGMPHKKH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FALOGMPHKKH___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsValid_b__5_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + FALOGMPHKKH___C__GET_ISVALID_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsValid_b__5_1(::RPG::Client::GridFightProjection* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightProjection*))((::PBYTE)hIl2Cpp + FALOGMPHKKH___C__GET_ISVALID_B__5_1_OFFSET))(this, a1);
		}

	};
