#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGOPMFJBPMH;
namespace System { class Object; }

#define EGOPMFJBPMH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF848F0)
#define EGOPMFJBPMH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF84920)
#define EGOPMFJBPMH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FF84930)

inline static constexpr unsigned int EGOPMFJBPMH___c_TypeDefinitionIndex = 32322;

	class EGOPMFJBPMH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3BE40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGOPMFJBPMH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOPMFJBPMH___C_CTOR_OFFSET))(this);
		}

		::EGOPMFJBPMH* __cctor_b__18_0()
		{
			return ((::EGOPMFJBPMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOPMFJBPMH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
