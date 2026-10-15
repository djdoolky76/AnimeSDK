#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class TakeMailAttachmentScRsp; }
namespace System { class Object; }

#define PROTO_TAKEMAILATTACHMENTSCRSP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFEA930)
#define PROTO_TAKEMAILATTACHMENTSCRSP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFEA970)
#define PROTO_TAKEMAILATTACHMENTSCRSP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DFEA980)

namespace Proto
{
	inline static constexpr unsigned int TakeMailAttachmentScRsp___c_TypeDefinitionIndex = 30501;

	class TakeMailAttachmentScRsp___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x4EFE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP___C_CTOR_OFFSET))(this);
		}

		::Proto::TakeMailAttachmentScRsp* __cctor_b__38_0()
		{
			return ((::Proto::TakeMailAttachmentScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TAKEMAILATTACHMENTSCRSP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
}
