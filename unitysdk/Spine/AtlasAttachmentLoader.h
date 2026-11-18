#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Atlas; }
namespace Spine { class AtlasRegion; }
namespace Spine { class BoundingBoxAttachment; }
namespace Spine { class ClippingAttachment; }
namespace Spine { class MeshAttachment; }
namespace Spine { class PathAttachment; }
namespace Spine { class PointAttachment; }
namespace Spine { class RegionAttachment; }
namespace Spine { class Sequence; }
namespace Spine { class Skin; }
namespace System { class String; }

#define SPINE_ATLASATTACHMENTLOADER_FINDREGIONS_OFFSET UNITYSDK_OFFSET(0x1FE0BCB0)
#define SPINE_ATLASATTACHMENTLOADER_FINDREGION_OFFSET UNITYSDK_OFFSET(0x1FE0BDB0)
#define SPINE_ATLASATTACHMENTLOADER_NEWBOUNDINGBOXATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1FE0BF80)
#define SPINE_ATLASATTACHMENTLOADER_NEWCLIPPINGATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1FE0C0F0)
#define SPINE_ATLASATTACHMENTLOADER_NEWMESHATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1FE0BF10)
#define SPINE_ATLASATTACHMENTLOADER_NEWPATHATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1FE0C010)
#define SPINE_ATLASATTACHMENTLOADER_NEWPOINTATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1FE0C0A0)
#define SPINE_ATLASATTACHMENTLOADER_NEWREGIONATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1FE0BEA0)
#define SPINE_ATLASATTACHMENTLOADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE0BC30)
#define SPINE_ATLASATTACHMENTLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE0BBB0)

namespace Spine
{
	inline static constexpr unsigned int AtlasAttachmentLoader_TypeDefinitionIndex = 32965;

	class AtlasAttachmentLoader : public ::System::Object
	{
	public:
		::Il2CppArray<::Spine::Atlas*>* atlasArray; // 0x10
		::System::Boolean allowMissingRegions; // 0x18

		::System::Void _ctor(::Il2CppArray<::Spine::Atlas*>* atlasArray)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Spine::Atlas*>*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER__CTOR_OFFSET))(this, atlasArray);
		}

		::System::Void _ctor_1(::System::Boolean allowMissingRegions, ::Il2CppArray<::Spine::Atlas*>* atlasArray)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::Spine::Atlas*>*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER__CTOR_1_OFFSET))(this, allowMissingRegions, atlasArray);
		}

		::System::Void FindRegions(::System::String* name, ::System::String* basePath, ::Spine::Sequence* sequence)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Spine::Sequence*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_FINDREGIONS_OFFSET))(this, name, basePath, sequence);
		}

		::Spine::AtlasRegion* FindRegion(::System::String* name, ::System::String* path)
		{
			return ((::Spine::AtlasRegion*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_FINDREGION_OFFSET))(this, name, path);
		}

		::Spine::RegionAttachment* NewRegionAttachment(::Spine::Skin* skin, ::System::String* placeholder, ::System::String* name, ::System::String* path, ::Spine::Sequence* sequence)
		{
			return ((::Spine::RegionAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*, ::System::String*, ::System::String*, ::Spine::Sequence*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_NEWREGIONATTACHMENT_OFFSET))(this, skin, placeholder, name, path, sequence);
		}

		::Spine::MeshAttachment* NewMeshAttachment(::Spine::Skin* skin, ::System::String* placeholder, ::System::String* name, ::System::String* path, ::Spine::Sequence* sequence)
		{
			return ((::Spine::MeshAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*, ::System::String*, ::System::String*, ::Spine::Sequence*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_NEWMESHATTACHMENT_OFFSET))(this, skin, placeholder, name, path, sequence);
		}

		::Spine::BoundingBoxAttachment* NewBoundingBoxAttachment(::Spine::Skin* skin, ::System::String* placeholder, ::System::String* name)
		{
			return ((::Spine::BoundingBoxAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_NEWBOUNDINGBOXATTACHMENT_OFFSET))(this, skin, placeholder, name);
		}

		::Spine::PathAttachment* NewPathAttachment(::Spine::Skin* skin, ::System::String* placeholder, ::System::String* name)
		{
			return ((::Spine::PathAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_NEWPATHATTACHMENT_OFFSET))(this, skin, placeholder, name);
		}

		::Spine::PointAttachment* NewPointAttachment(::Spine::Skin* skin, ::System::String* placeholder, ::System::String* name)
		{
			return ((::Spine::PointAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_NEWPOINTATTACHMENT_OFFSET))(this, skin, placeholder, name);
		}

		::Spine::ClippingAttachment* NewClippingAttachment(::Spine::Skin* skin, ::System::String* placeholder, ::System::String* name)
		{
			return ((::Spine::ClippingAttachment*(*)(::PVOID, ::Spine::Skin*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATLASATTACHMENTLOADER_NEWCLIPPINGATTACHMENT_OFFSET))(this, skin, placeholder, name);
		}
	};
}
