#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLFMKDAGCFO;
namespace System { class Object; }

#define BLFMKDAGCFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC632E0)
#define BLFMKDAGCFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC63320)
#define BLFMKDAGCFO___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1FC63330)

inline static constexpr unsigned int BLFMKDAGCFO___c_TypeDefinitionIndex = 32411;

	class BLFMKDAGCFO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57CC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLFMKDAGCFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFMKDAGCFO___C_CTOR_OFFSET))(this);
		}

		::BLFMKDAGCFO* __cctor_b__68_0()
		{
			return ((::BLFMKDAGCFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFMKDAGCFO___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
