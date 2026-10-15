#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }

#define OJHMEHAHDNI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBEB9E00)
#define OJHMEHAHDNI___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBEB9E30)
#define OJHMEHAHDNI___C__SENDINITREQUEST_B__30_0_OFFSET UNITYSDK_OFFSET(0xBEB9F20)
#define OJHMEHAHDNI___C___REQUESTSTARTMATCHANDBEGIN_B__16_1_OFFSET UNITYSDK_OFFSET(0xBEB9EB0)
#define OJHMEHAHDNI___C___REQUESTSTARTMATCHANDBEGIN_B__16_3_OFFSET UNITYSDK_OFFSET(0xBEB9E40)

inline static constexpr unsigned int OJHMEHAHDNI___c_TypeDefinitionIndex = 81731;

	class OJHMEHAHDNI___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__30_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54780);
		}

		static ::System::Action** StaticGet___9__16_3()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54788);
		}

		static ::System::Action** StaticGet___9__16_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54790);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54798);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJHMEHAHDNI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHMEHAHDNI___C_CTOR_OFFSET))(this);
		}

		::System::Void __RequestStartMatchAndBegin_b__16_3(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + OJHMEHAHDNI___C___REQUESTSTARTMATCHANDBEGIN_B__16_3_OFFSET))(this, a1);
		}

		::System::Void __RequestStartMatchAndBegin_b__16_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + OJHMEHAHDNI___C___REQUESTSTARTMATCHANDBEGIN_B__16_1_OFFSET))(this, a1);
		}

		::System::Void _SendInitRequest_b__30_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + OJHMEHAHDNI___C__SENDINITREQUEST_B__30_0_OFFSET))(this, a1);
		}

	};
