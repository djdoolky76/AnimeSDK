#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FBD6047D9585672F_F808EC9F061CD69F_OFFSET UNITYSDK_OFFSET(0x1C52680)
#define FBD6047D9585672F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C52740)

inline static constexpr unsigned int FBD6047D9585672F_TypeDefinitionIndex = 9647;

class FBD6047D9585672F : public ::System::Object
{
public:
	::System::UInt32 A1AD49ABC0442489; // 0x10
	::System::Byte _padding0[0x4];
	::System::Func_2<::System::UInt32, ::E12F55A5FCCCF1EC>* AE9A527955CEEF68; // 0x18
	::System::Action_2<::E12F55A5FCCCF1EC, ::E12F55A5FCCCF1EC>* F1F95D6DC84033A5; // 0x20
	::E12F55A5FCCCF1EC A30BEEE8D94AF626; // 0x28

	::System::Void _ctor(::System::UInt32 F79B4D487F303AB2, ::System::Func_2<::System::UInt32, ::E12F55A5FCCCF1EC>* FE3E184A470F1C63, ::System::Action_2<::E12F55A5FCCCF1EC, ::E12F55A5FCCCF1EC>* B1C69A52366DDEE4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Func_2<::System::UInt32, ::E12F55A5FCCCF1EC>*, ::System::Action_2<::E12F55A5FCCCF1EC, ::E12F55A5FCCCF1EC>*))((::PBYTE)hIl2Cpp + FBD6047D9585672F__CTOR_OFFSET))(this, F79B4D487F303AB2, FE3E184A470F1C63, B1C69A52366DDEE4);
	}

	::System::Void F808EC9F061CD69F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBD6047D9585672F_F808EC9F061CD69F_OFFSET))(this);
	}
};
