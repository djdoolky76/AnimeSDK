#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Sofa { class BaseSofaControl; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

inline static constexpr unsigned int IFDCGDJCPLM___O_TypeDefinitionIndex = 50023;

	class IFDCGDJCPLM___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::Sofa::BaseSofaControl*, ::Sofa::BaseSofaControl*>** StaticGet__2____GetControlFromControl()
		{
			return (::System::Func_2<::Sofa::BaseSofaControl*, ::Sofa::BaseSofaControl*>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x4BBE0);
		}

		static ::System::Func_2<::UnityEngine::Transform*, ::Sofa::BaseSofaControl*>** StaticGet__1____GetControlFromTransform()
		{
			return (::System::Func_2<::UnityEngine::Transform*, ::Sofa::BaseSofaControl*>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x4BBE8);
		}

		static ::System::Func_2<::UnityEngine::GameObject*, ::Sofa::BaseSofaControl*>** StaticGet__0____GetControlFromGameObject()
		{
			return (::System::Func_2<::UnityEngine::GameObject*, ::Sofa::BaseSofaControl*>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x4BBF0);
		}

	};
