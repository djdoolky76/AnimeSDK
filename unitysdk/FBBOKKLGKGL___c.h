#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBBOKKLGKGL;
namespace System { class Object; }

#define FBBOKKLGKGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F88FBC0)
#define FBBOKKLGKGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F88FBF0)
#define FBBOKKLGKGL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F88FC00)

inline static constexpr unsigned int FBBOKKLGKGL___c_TypeDefinitionIndex = 34548;

	class FBBOKKLGKGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBBOKKLGKGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBOKKLGKGL___C_CTOR_OFFSET))(this);
		}

		::FBBOKKLGKGL* __cctor_b__33_0()
		{
			return ((::FBBOKKLGKGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBOKKLGKGL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
